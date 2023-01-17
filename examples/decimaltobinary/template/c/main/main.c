#include <stdio.h>
#include <stdlib.h>
#include "../function/function.h"

int main()
{
    char *line = NULL;
    size_t len = 0;
    ssize_t lineSize = 0;
    lineSize = getline(&line, &len, stdin);
    char* res = handle(line);
    free(line);
    if (res == NULL)
    {
        printf("Error");
        return 1;
    }
    printf("%s", res);
    free(res);
    return 0;
}
