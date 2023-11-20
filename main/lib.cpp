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

int mystrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(const unsigned char*)str1 - *(const unsigned char*)str2;
}

int StringToNumber(char* str) {
    try {
        return stoi(str);
    }
    catch (const invalid_argument&) {
       
        return 0; 
    }
}

char* NumberToString(int number) {
    return _strdup(to_string(number).c_str());
}

char* Uppercase(char* str1) {
    char* ptr = str1;
    while (*ptr != '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr -= 32;
        }
        ptr++;
    }
    return str1;
}

char* Lowercase(char* str1) {
    char* ptr = str1;
    while (*ptr != '\0') {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr += 32;
        }
        ptr++;
    }
    return str1;
}

char* mystrrev(char* str) {
    int length = mystrlen(str);
    char* reversed = new char[length + 1];

    for (int i = 0; i < length; ++i) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';

    return reversed;
}