/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:23:30 by showatan          #+#    #+#             */
/*   Updated: 2025/06/01 17:14:29 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_unsigned(unsigned int nbr)
{
	int	count;
	int	temp;

	temp = nbr;
	count = 0;
	while (temp >= 10)
	{
		temp /= 10;
		count++;
	}
	if (nbr >= 10)
		ft_treat_unsigned(nbr / 10);
	ft_putchar_fd(nbr % 10 + '0', 1);
	return (count + 1);
}
