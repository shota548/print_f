/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:14:46 by showatan          #+#    #+#             */
/*   Updated: 2025/06/14 17:27:09 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_int(int nbr)
{
	char	*str;
	int		count;

	count = 0;
	str = ft_itoa(nbr);
	count += ft_putstr_count(str);
	free(str);
	return (count);
}
