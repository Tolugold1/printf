#include "main.h"
#include <stdio.h>

/**
 * _printf - Function to work like a printf function
 * @format: the format of printing character
 * Return: result.
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int i = 0;
	int result = 0;

	va_start(valist, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '\0')
		{
			break;
		}
		else if (format[i] == '%' && format[i + 1])
		{
			result += (*format_conversion(format[i + 1]))(valist);
			i++;
		}
		else
		{
			result += _putchar(format[i]);
		}
	}
	va_end(valist);
	return (result);
}
