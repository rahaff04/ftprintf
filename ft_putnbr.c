#include "libftprintf.h"

int	ft_putnbr(int n)
{
	long	nb;
    int     count;

    count = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
        count++;
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
		count++;
	}
	else if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
		count++;
	}
    return (count);
}