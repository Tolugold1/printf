#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

typedef struct fmt
{
  char Fehin;
  int (*Tolu)(va_list);
} ft;

int _putchar(char c);
int print_string(va_list list);
int print_digit(va_list intlist);
int print_char(va_list charlist);
int processINT(int i, int result);
int (*format_conversion(char s))(va_list);
char percentage(const char *c);
int negative_num(int i);
#endif
