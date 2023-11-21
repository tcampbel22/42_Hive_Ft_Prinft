/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:26:42 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/21 13:18:40 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	str_handler(char flag, va_list ap)
{
	int	count;

	count = 0;
	if (flag == 'c')
		count += ft_putchar_count(va_arg(ap, int));
	else if (flag == 's')
		count += ft_putstr_count(va_arg(ap, char *));
	else if (flag == 'd')
		count += ft_putnbr_count((long)va_arg(ap, int));
	else if (flag == 'x')
		count += ft_puthex_count((long)va_arg(ap, unsigned int), flag);
	else if (flag == 'X')
		count += ft_puthex_count((long)va_arg(ap, unsigned int), flag);
	else if (flag == 'i')
		count += ft_putnbr_count((long)va_arg(ap, int));
	else if (flag == 'u')
		count += ft_putnbr_count((long)va_arg(ap, unsigned int));
	else if (flag == 'p')
	{
		count += ft_putstr_count("0x");
		count += ft_puthex_count(va_arg(ap, unsigned long long), flag);
	}
	else if (flag == '%')
		count += ft_putchar_count('%');
	return (count);
}
