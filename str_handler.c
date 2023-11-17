/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:26:42 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/17 15:56:21 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	str_handler(char identifier, va_list ap)
{
	int	count;

	count = 0;
	if (identifier == 'c')
		count += ft_putchar_count(va_arg(ap, int));
/*	else if (s[i] == "s")
		count += ft_putstr_count(va_args(ap, char *);)
	else if (s[i] == "d")
		count += ft_putnbr_count(va_args(ap, int));
	else if (s[i] == "p")
		count += ft_puthex_count(va_args(ap, int));
	else if (s[i] == "x");
		count += ft_puthex_count(va_args(ap, unsigned int));
	else if (s[i] == "i")
		count += ft_putnbr_count(va_args(ap, int));
	else if (s[i] == "u")
		count += ft_putnbr_count(va_args(ap, unsigned int));
	else if (s[i] == "X")
		count += ft_puthex_count(va_args(ap, unsigned int));
	else if (s[i] == "%")
		count += ft_putchar_count(va_args(ap, int));*/
	return (count);
}

