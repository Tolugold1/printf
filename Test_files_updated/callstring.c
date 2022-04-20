#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _putchar - Function to write to standard output
 * @c: character to print out.
 * Return: Result.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - function to get the character variable
 * @strlist: strings to be printed.
 * Return: String.
 */

int print_string(va_list strlist)
{
	int i;
	char *s = va_arg(strlist, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	return (i);
}
