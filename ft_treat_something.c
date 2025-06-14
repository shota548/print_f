/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_something.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:57:15 by showatan          #+#    #+#             */
/*   Updated: 2025/06/14 17:26:35 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_something(const char	*input, va_list args)
{
	int	count;

	count = 0;
	if (*input == 'c')
		count += ft_treat_char(va_arg(args, int));
	if (*input == 's')
		count += ft_treat_string(va_arg(args, char *));
	if (*input == 'p')
		count += ft_treat_point(va_arg(args, void *));
	if (*input == 'd' || *input == 'i')
		count += ft_treat_int(va_arg(args, int));
	if (*input == 'u')
		count += ft_treat_unsigned(va_arg(args, unsigned int));
	if (*input == 'x')
		count += ft_treat_hexa(va_arg(args, unsigned int), 1);
	if (*input == 'X')
		count += ft_treat_hexa(va_arg(args, unsigned int), 0);
	if (*input == '%')
		count += ft_putstr_count("%");
	return (count);
}
