#include <stdlib.h>
#include "function.h"
#include "./res/lib.h"

char *handle(char *req)
{
    char *res;
    res = malloc(sizeof(char) * 5);
    if (res == NULL)
    {
        return res;
    }
    res[0] = 'H';
    res[1] = 'e';
    res[2] = 'y';
    res[3] = '!';
    res[4] = '\0';
    return res;
}