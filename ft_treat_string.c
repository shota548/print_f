/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 10:49:58 by showatan          #+#    #+#             */
/*   Updated: 2025/06/01 17:14:29 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_string(char *str)
{
	int	count;

	if (str == NULL)
		str = "(null)";
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count);
}
