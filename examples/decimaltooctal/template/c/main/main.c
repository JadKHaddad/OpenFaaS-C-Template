#include <stdio.h>
#include <stdlib.h>
#include "../function/function.h"

int main()
{
    char *line = NULL;
    size_t len = 0;
    ssize_t lineSize = 0;
    lineSize = getline(&line, &len, stdin);
    handle(line);
    free(line);
    return 0;
}