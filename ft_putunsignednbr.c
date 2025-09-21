/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralamair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:14:42 by ralamair          #+#    #+#             */
/*   Updated: 2025/09/02 11:48:58 by ralamair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignednbr(unsigned int n)
{
	int		count;
	char	num;

	count = 0;
	if (n >= 10)
		count += ft_putunsignednbr(n / 10);
	num = (n % 10) + '0';
	write(1, &num, 1);
	count++;
	return (count);
}
