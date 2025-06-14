/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_output.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:23:07 by showatan          #+#    #+#             */
/*   Updated: 2025/06/14 17:26:06 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_output(const char	*input, va_list args)
{
	int	count;

	count = 0;
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			count += ft_treat_something(input, args);
		}
		else
		{
			ft_putchar_fd(*input, 1);
			count++;
		}
		input++;
	}
	return (count);
}
