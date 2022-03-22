#include "function.h"
#include "./res/lib.h"

#include <stdio.h>
#include <stdlib.h>

void handle(char *req)
{
    int decimalnum = atoi(req);
    int octalnum = decimalToOctal(decimalnum);
    printf("%d", octalnum);
}