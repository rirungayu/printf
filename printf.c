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
int j = 0;
va_list args;
char *str;

va_start(args, format);

if (format == NULL)
exit(98);
while (format[i] != '\0')
{
if (format[i] == 's')
{
str = va_arg(args, char *);
while (str[j] != '\0')
{
putchar(str[j]);
j++;
}
}
i++;
}
va_end(args);

return (i);
}
