#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * percentage - function to check out for percentage in a program
 * @c: integer to be inputted
 *
 * Return: percentage
 */

char percentage(const char *c)
{
	int i;
	char s;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == '%')
		{
			s = '%';
		}
	}
	return (_putchar(s));
}
