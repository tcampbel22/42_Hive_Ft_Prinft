/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:26:42 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/20 17:18:57 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	str_handler(char identifier, va_list ap)
{
	int	count;

	count = 0;
	if (identifier == 'c')
		count += ft_putchar_count(va_arg(ap, int));
	else if (identifier == 's')
		count += ft_putstr_count(va_arg(ap, char *));
	else if (identifier == 'd')
		count += ft_putnbr_count((long)va_arg(ap, int), 10, identifier);
	else if (identifier == 'x')
		count += ft_putnbr_count((long)va_arg(ap, unsigned int), 16, identifier);
	else if (identifier == 'X')
		count += ft_putnbr_count((long)va_arg(ap, unsigned int), 16, identifier);
	else if (identifier == 'i')
		count += ft_putnbr_count((long)va_arg(ap, int), 10, identifier);
	else if (identifier == 'u')
		count += ft_putnbr_count((long)va_arg(ap, unsigned int), 10, identifier);
	else if (identifier == 'p')
	{
		count += ft_putstr_count("0x");
		count += ft_putnbr_count((long)va_arg(ap, unsigned int), 16, identifier);
	}
	else if (identifier == '%')
		count += ft_putchar_count('%');
	return (count);
}
