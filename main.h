#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int function_s(char *s);
void function_c(int c);
int function_decimal(int d);
int main_controller(char *format, va_list args);
#endif
