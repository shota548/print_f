/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:14:29 by showatan          #+#    #+#             */
/*   Updated: 2025/06/01 17:14:29 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_hexa(unsigned int nbr, int lower_flag)
{
	int		count;
	char	*hex;

	count = 0;
	hex = ft_change_base((unsigned long long)nbr, 16);
	if (lower_flag == 1)
		hex = ft_tolower_all(hex);
	count += ft_putstr_count(hex);
	free(hex);
	return (count);
}
