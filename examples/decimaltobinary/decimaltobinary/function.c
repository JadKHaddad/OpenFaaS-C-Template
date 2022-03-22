#include <stdlib.h>
#include "function.h"
#include "./res/lib.h"

#include <stdio.h>

char* handle(char* req) {
    int decimalnum = atoi(req);
    unsigned long binarynum = decimalToBinary(decimalnum);
    const int n = snprintf(NULL, 0, "%lu", binarynum);
    char* res = (char*) malloc((n+1)*sizeof(char));
    int c = snprintf(res, n+1, "%lu", binarynum);
    return res;
}