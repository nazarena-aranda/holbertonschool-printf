#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_str(char *s);
int print_char(char c);
int print_num(int n);
#endif
