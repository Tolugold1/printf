#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * struct fmt - structure
 * @F: char holding the format.
 * @T: pointer function.
 */
typedef struct fmt
{
	char F;
	int (*T)(va_list);
} ft;

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list strlist);
int print_digit(va_list intlist);
int print_char(va_list charlist);
int (*format_conversion(char s))(va_list);
int percentage(__attribute__((unused))va_list valist);

#endif
