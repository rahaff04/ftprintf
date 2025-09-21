/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralamair <ralamair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:07:43 by ralamair          #+#    #+#             */
/*   Updated: 2025/09/06 08:50:15 by ralamair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	count;

	if (!str)
		return (ft_putstr("(null)"));
	count = 0;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		count++;
		i++;
	}
	return (count);
}
