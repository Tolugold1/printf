#include "main.h"

int negative_digit(va_list intnlist)
{
  int i = va_arg(intnlist, int);
  return (recursive_num(i, 0));
}

char recursive_num(int i, int result)
{
  if (i < 0)
  {
    result += recursive_num(i / 10, result);
  }
  return (_putchar('-') + (result + _putchar(i % 10 + '0')));
}
