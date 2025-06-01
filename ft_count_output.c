/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_output.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:23:07 by showatan          #+#    #+#             */
/*   Updated: 2025/06/01 19:18:46 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_output(const char	*input, va_list args)
{
	// size_t?だとしたら理由は？
	int	count;

	count = 0;
	//inputの途中にnull文字が入る場合は考える？
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
