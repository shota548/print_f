/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:25:38 by showatan          #+#    #+#             */
/*   Updated: 2025/05/31 15:09:33 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static char	*ft_devide_by_base(unsigned long long src_nbr, int base, char *dst_nbr, int count_digit)
{
	while (src_nbr != 0)
	{
		if ((src_nbr % base) < 10)
			dst_nbr[count_digit - 1] = (src_nbr % base) + '0';
		else
			dst_nbr[count_digit - 1] = (src_nbr % base) + '7';
		src_nbr /= base;
		count_digit--;
	}
	return (dst_nbr);
}

char	*ft_change_base(unsigned long long src_nbr, int base)
{
	char	*dst_nbr;
	int		count_digit;

	count_digit = 0;
	if (src_nbr == 0)
		return (ft_strdup('0'));
	while (src_nbr != 0)
	{
		src_nbr /= base;
		count_digit++;
	}
	dst_nbr = ft_calloc(count_digit + 1, sizeof(char));
	if (dst_nbr == NULL)
		return (NULL);
	dst_nbr = change_base(src_nbr, base, dst_nbr, count_digit);
	return (dst_nbr);

}
