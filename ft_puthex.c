#include "libftprintf.h"

int	ft_puthexLower(unsigned int n)
{
    char *base = "0123456789abcdef";
    int count;

    count = 0;
    if (n >= 16)
        count += ft_puthexLower(n / 16);
    write(1, &base[n % 16], 1);
    return (count + 1);
}

int	ft_puthexUpper(unsigned int n)
{
    char *base = "0123456789ABCDEF";
    int count;

    count = 0;
    if (n >= 16)
        count += ft_puthexUpper(n / 16);
    write(1, &base[n % 16], 1);
    return (count + 1);
}