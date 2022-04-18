#include <stdarg.h>
#include "main.h"

/**
 * print_digit - function to get int variable
 * @intlist: variable list
 *
 * Return: integer
 */

int print_digit(va_list intlist)
{
	int i, div, len;
	unsigned int num;

	i = va_arg(intlist, int);
	div = 1;
	len = 0;

	if (i < 0)
	{
		len += _putchar('-');
		num = i * -1;
	}
	else
	{
		num = i;
	}

	for (; num / div > 9;)
	{
		div *= 10;
	}

	for (; div != 0;)
	{
		len += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}

	return (len);
}
