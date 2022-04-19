#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
  va_list valist;
  int i = 0;
  int result = 0;

  va_start(valist, format);

  for (i = 0; format[i] != '\0'; i++)
  {
    if (format[i] == '%' && format[i + 1] == '%')
    {
      result += percentage(format);
      i++;
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

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int len;
  int len2;


  len = _printf("Let's try to printf a simple sentence.\n");
  len2 = _printf("Let's try to printf a simple sentence.\n");
  _printf("Length:[%d, %i]\n", 14, 56);
  _printf("Negative:[%d]\n", -762534);
}
