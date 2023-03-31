#include <stdio.h>

#ifndef printf
#define printf

int _printf(const char *format, ...);
int _putchar(char c);
void function_s(char *s);
void function_c(int c);
void function_decimal(int d);
void function_bslash(char c);
void main_controller(char *format, va_list args);
#endif
