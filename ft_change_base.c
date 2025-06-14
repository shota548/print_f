/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:25:38 by showatan          #+#    #+#             */
/*   Updated: 2025/06/14 17:33:04 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*dev(unsigned long long src_nb, int base, char *dst_nb, int n_digit)
{
	while (src_nb != 0)
	{
		if ((src_nb % base) < 10)
			dst_nb[n_digit - 1] = (src_nb % base) + 48;
		else
			dst_nb[n_digit - 1] = (src_nb % base) + 55;
		src_nb /= base;
		n_digit--;
	}
	return (dst_nb);
}

char	*ft_change_base(unsigned long long src_nbr, int base)
{
	char				*dst_nbr;
	int					count_digit;
	unsigned long long	copy_sn;

	count_digit = 0;
	copy_sn = src_nbr;
	if (copy_sn == 0)
		return (ft_strdup("0"));
	while (copy_sn != 0)
	{
		copy_sn /= base;
		count_digit++;
	}
	dst_nbr = ft_calloc(count_digit + 1, sizeof(char));
	if (dst_nbr == NULL)
		return (NULL);
	dst_nbr = dev(src_nbr, base, dst_nbr, count_digit);
	return (dst_nbr);
}
