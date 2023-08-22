#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: The string character
 * Return: 1
 */

int _printf(const char *format, ...)
{
    unsigned int i, s_loop, loop = 0;

    va_list holder;

    va_start(holder, format);

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            putchrr(format[i]);
        }
        else if (format[i] == '%' && format[i + 1] == 'c')

        {
            putchrr(va_arg(holder, int));
            i++;
        }
        else if (format[i + 1] == 's')
        {
            s_loop = putz(va_arg(holder, char *));
            i++;
            loop += (s_loop - 1);
        }
        else if (format[i + 1] == '%')
        {
            putchrr('%');
        }
        loop += 1;

    }
    va_end(holder);
    return (loop);
}
