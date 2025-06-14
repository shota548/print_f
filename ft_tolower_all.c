/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:57:16 by showatan          #+#    #+#             */
/*   Updated: 2025/06/14 17:31:13 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_tolower_all(char	*str)
{
	char	*temp_s;

	temp_s = str;
	if (temp_s == NULL)
		return (NULL);
	while (*temp_s != '\0')
	{
		*temp_s = ft_tolower(*temp_s);
		temp_s++;
	}
	return (str);
}
