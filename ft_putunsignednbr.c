#include "libftprintf.h"

int	ft_putunsignednbr(unsigned int n)
{
    int count;
    char    nb;

    count = 0;
    if (n >= 10)
    {
        count += ft_putunsignednbr(n / 10);
    }
    nb = n % 10 + '0';
    write(1, &nb, 1);
    count++;
    return (count);
}