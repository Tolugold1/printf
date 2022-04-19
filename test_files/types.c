#include "main.h"

/**
 * format_conversion - pointer function
 * @s: the formats e.g (%d,%s,%b...) 
 * @return int(*)(va_list) 
 */

int (*format_conversion(char s))(va_list)
{
  ft conversion_type[] =
  {
    {'d', print_digit},
    {'i', print_digit},
    {'c', print_char},
    {'s', print_string},
    {'\0', NULL}
  };

  int i;

  for (i = 0; conversion_type[i].Fehin != '\0'; i++)
  {
    if (conversion_type[i].Fehin == s)
    {
      return (conversion_type[i].Tolu);
    }
  }
  return (0);
}
