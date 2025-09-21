/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralamair <ralamair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:10:23 by ralamair          #+#    #+#             */
/*   Updated: 2025/09/06 09:22:12 by ralamair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_lower(unsigned int n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_puthex_lower(n / 16);
	write(1, &base[n % 16], 1);
	return (count + 1);
}

int	ft_puthex_upper(unsigned int n)
{
	char	*base;
	int		count;

	base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_puthex_upper(n / 16);
	write(1, &base[n % 16], 1);
	return (count + 1);
}
