#include "ft_printf.h"

int	ft_puthex_lower(unsigned int n)
{
    char *base = "0123456789abcdef";
    int count;

    count = 0;
    if (n >= 16)
        count += ft_puthex_lower(n / 16);
    write(1, &base[n % 16], 1);
    return (count + 1);
}

int	ft_puthex_upper(unsigned int n)
{
    char *base = "0123456789ABCDEF";
    int count;

    count = 0;
    if (n >= 16)
        count += ft_puthex_upper(n / 16);
    write(1, &base[n % 16], 1);
    return (count + 1);
}