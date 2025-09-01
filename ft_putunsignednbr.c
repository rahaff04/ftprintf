#include "libftprintf.h"

int	ft_putunsignednbr(unsigned int n)
{
    int count;

    count = 0;
    if (n >= 10)
    {
        count += ft_putunsignednbr(n / 10);
    }
    write(1, &n % 10 + '0', 1);
    count++;
    return (count);
}