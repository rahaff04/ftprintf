/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralamair <ralamair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 10:01:35 by ralamair          #+#    #+#             */
/*   Updated: 2025/09/06 11:02:07 by ralamair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex_lower_ptr(unsigned long nb)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
		count += ft_puthex_lower_ptr(nb / 16);
	count += write(1, &base[nb % 16], 1);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	addr;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	addr = (unsigned long)ptr;
	count += ft_putstr("0x");
	count += ft_puthex_lower_ptr(addr);
	return (count);
}
