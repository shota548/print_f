/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:01:38 by showatan          #+#    #+#             */
/*   Updated: 2025/06/01 17:14:29 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_point(unsigned long long point)
{
	char	*p;
	int		count;

	count = 0;
	p = ft_tolower_all(ft_change_base(point, 16));
	count += ft_putstr_count("0x");
	count += ft_putstr_count(p);
	free(p);
	return (count);
}
