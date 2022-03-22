FROM openfaas/classic-watchdog:0.18.0 as watchdog
FROM alpine:3.14

RUN apk add --no-cache gcc=10.3.1_git20210424-r2 musl-dev

RUN USER=root

COPY function /home/app/function
COPY main /home/app/main

WORKDIR /home/app/main

RUN gcc ../function/*.c ../function/res/*.c main.c -O2 -s -DNDEBUG -o /usr/bin/main

RUN apk --no-cache add curl ca-certificates \
    && addgroup -S app && adduser -S -g app app

COPY --from=watchdog /fwatchdog /usr/bin/fwatchdog
RUN chmod +x /usr/bin/fwatchdog

HEALTHCHECK --interval=5s CMD [ -e /tmp/.lock ] || exit 1

ENV fprocess="main"

RUN ls -la /

CMD ["fwatchdog"]