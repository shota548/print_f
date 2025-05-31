/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:14:26 by showatan          #+#    #+#             */
/*   Updated: 2025/05/31 15:19:30 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_f.h"

int	ft_putstr_count(char *str)
{
	int	count;

	while (*str != '\0')
	{
		ft_putstr_fd(str, 1);
		count++;
	}
	return (count);
}
