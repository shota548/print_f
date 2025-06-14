/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:01:38 by showatan          #+#    #+#             */
/*   Updated: 2025/06/14 17:25:04 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_point(void *point)
{
	char	*p;
	int		count;

	count = 0;
	if (point == NULL)
	{
		count += ft_putstr_count("(nil)");
		return (count);
	}
	p = ft_tolower_all(ft_change_base((unsigned long long)point, 16));
	count += ft_putstr_count("0x");
	count += ft_putstr_count(p);
	free(p);
	return (count);
}
