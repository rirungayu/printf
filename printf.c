#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* _printf - prints a string
* @format: format of input
* Return: number of items printed
*/

int _printf(const char *format, ...)
{
int i = 0;
va_list args;

va_start(args, format);

if (format == NULL)
exit(98);
while (format[i] != '\0')
{
if (format[i] == '%')
{
  ++i;
  continue;
}
putchar(format[i]);
i++;
}
va_end(args);

return (i);
}
