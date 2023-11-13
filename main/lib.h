#include <iostream>
using namespace std;
#ifndef LIB_H
#define LIB_H


int mystrlen(const char* str);


char* mystrcpy(char* str1, const char* str2);


char* mystrcat(char* str1, const char* str2);


char* mystrchr(char* str, char s);

char* mystrstr(char* str1, char* str2);

#endif 
