/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_something.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:57:15 by showatan          #+#    #+#             */
/*   Updated: 2025/05/31 14:35:11 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_treat_something(const char	*input, va_list args)
{
	int	count;

	count = 0;
	if (*input == 'c')
		count += ft_treat_char(args);
	if (*input == 's')
		count += ft_treat_string(args);
	if (*input == 'p')
		count += ft_treat_point(args);
	if (*input == 'd' || *input == 'i')
		count += ft_treat_int(args);
	if (*input == 'u')
		count += ft_treat_unsigned(args);
	if (*input == 'x')
		count += ft_treat_hexa(args);
	if (*input == 'X')
		count += ft_treat_hexa(args);
	if (*input == '%')
		count += ft_putstr_count('%');
	return (count);
}
