#include <stdarg.h>
#include <unistd.h>

int _putchar(char c)
{
  return (write(1, &c, 1));
}

/**
 * _char - function to get the character variable
 * @strlist: strings to be printed.
 * Return: String.
 */

int print_string(va_list strlist) //because there will be no string place here first, we have to get the list of the string.
{
  int i;
  char *s = va_arg(strlist, char *);

  for (i = 0; s[i] != '\0'; i++)
  {
    _putchar(s[i]);
  }

  return (i);
}
