#include "main.h"

int _printf(const char *format, ...)
{
int counter = 0;
va_list args;
va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
counter += _putchar(va_arg(args, int));
break;
case 's':
counter += puts(va_arg(args, char *));
break;
case '%':
counter += _putchar('%');
break;
default:
counter += _putchar('%');
counter += _putchar(*format);
break;
}
}
else
{
counter += _putchar(*format);
}
format++;
}

va_end(args);
return (counter);
}
