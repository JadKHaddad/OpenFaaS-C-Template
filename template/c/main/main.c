#include <stdio.h>
#include <stdlib.h>
#include "../function/function.h"

int main()
{
    char *line = NULL;
    size_t len = 0;
    getline(&line, &len, stdin);
    printf("%s", handle(line));
    free(line);
    return 0;
}