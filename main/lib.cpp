#include "lib.h"

int mystrlen(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}


char* mystrcpy(char* str1, const char* str2) {
    char* original = str1;
    while ((*str1++ = *str2++) != '\0');
    return original;
}


