/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:13:37 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/21 11:54:47 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	int		arg_count;
	va_list	ap;

	arg_count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			arg_count += str_handler(*str, ap);
			if (arg_count == -1)
			{
				va_end(ap);
				return (-1);
			}
		}
		else
			arg_count += write(1, str, 1);
		str++;
	}
	va_end(ap);
	return (arg_count);
}
