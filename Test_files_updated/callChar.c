#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_char - function to get the character variable
 * @charlist: characters to work with/be printed
 *
 * Return: the list of character.
 */

int print_char(va_list charlist)
{
	char c = va_arg(charlist, int);

	return (_putchar(c));
}
