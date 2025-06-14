/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showatan <showatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:58:02 by showatan          #+#    #+#             */
/*   Updated: 2025/06/14 17:36:18 by showatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include "./libft/libft.h"

char	*ft_change_base(unsigned long long src_nbr, int base);
int		ft_count_output(const char	*input, va_list args);
int		ft_printf(const char	*input, ...);
int		ft_putstr_count(char *str);
char	*ft_tolower_all(char	*str);
int		ft_treat_char(char c);
int		ft_treat_hexa(unsigned int nbr, int lower_flag);
int		ft_treat_int(int nbr);
int		ft_treat_point(void *point);
int		ft_treat_something(const char	*input, va_list args);
int		ft_treat_string(char *str);
int		ft_treat_unsigned(unsigned int nbr);

#endif
