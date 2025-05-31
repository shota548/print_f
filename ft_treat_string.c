/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 10:49:58 by showatan          #+#    #+#             */
/*   Updated: 2025/05/31 11:00:09 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_f.h"

int	ft_treat_string(char *str)
{
	int count;

	if (str == NULL)
		str == "(null)";
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count);
}
