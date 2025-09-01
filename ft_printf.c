#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int whatprint(char c, va_list args)
{
    if (c == 'c')
        return ft_putchar(va_arg(args, int));
    else if (c == 's')
        return ft_putstr(va_arg(args, char *));
    else if (c == 'd' || c == 'i')
        return ft_putnbr(va_arg(args, int));
    else if (c == 'u')
        return ft_putunsignednbr(va_arg(args, unsigned int));
    else if (c == 'x')
        return ft_puthexLower(va_arg(args, unsigned int));
    else if (c == 'X')
        return ft_puthexUpper(va_arg(args, unsigned int));
    else if (c == 'p')
        return ft_putptr(va_arg(args, void *));
    else if (c == '%')
        return ft_putchar('%');
    else
    {
        ft_putchar('%');
        return ft_putchar(c) + 1;
    }
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int count;
    int  i;

    count = 0;
    i = 0;
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;
            count += whatprint(format[i], args);
        }
        else
            count += ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return count;
}
