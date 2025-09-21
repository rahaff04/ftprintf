/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralamair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:57:56 by ralamair          #+#    #+#             */
/*   Updated: 2025/09/02 10:01:09 by ralamair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		count;

	count = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		count++;
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	else if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	return (count + 1);
}
