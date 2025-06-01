/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:57:16 by showatan          #+#    #+#             */
/*   Updated: 2025/06/01 17:14:29 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_tolower_all(char	*str)
{
	if (str == NULL)
		return (NULL);
	while (*str == '\0')
	{
		ft_tolower(*str);
		str++;
	}
	return (str);
}
