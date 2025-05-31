/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:23:30 by showatan          #+#    #+#             */
/*   Updated: 2025/05/31 14:46:52 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_f.h"

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
