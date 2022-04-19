#include "main.h"

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
