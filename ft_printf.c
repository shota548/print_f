/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 15:45:18 by showatan          #+#    #+#             */
/*   Updated: 2025/06/21 17:30:14 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char	*input, ...)
{
	va_list		args;
	int			num;

	num = 0;
	if (input == NULL)
		return (-1);
	va_start(args, input);
	num = ft_count_output(input, args);
	va_end(args);
	return (num);
}
