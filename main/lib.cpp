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


char* mystrcat(char* str1, const char* str2) {
    char* original = str1;
    while (*str1 != '\0') {
        str1++;
    }
    while ((*str1++ = *str2++) != '\0');
    return original;
}

char* mystrchr(char* str, char s) {
    while (*str != '\0') {
        if (*str == s) {
            return str;
        }
        str++;
    }
    return nullptr;
}


char* mystrstr(char* str1, char* str2) {
    while (*str1 != '\0') {
        char* temp1 = str1;
        char* temp2 = str2;
        while (*temp1 == *temp2 && *temp2 != '\0') {
            temp1++;
            temp2++;
        }
        if (*temp2 == '\0') {
            return str1;
        }
        str1++;
    }
    return nullptr;
}
