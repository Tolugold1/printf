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
	unsigned int i = 0;
	unsigned int result = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(valist, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '\0' || (format[i] == '%' && !format[i + 1]))
		{
			return (-1);
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i' ||
					format[i + 1] == 's' || format[i + 1] == 'c' || format[i + 1] == '%'))
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
