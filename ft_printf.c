/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:13:37 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/16 17:45:01 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_printf(const char *s, ...)
{
	int	num_args;
	va_list	ap;
	int	i;

	num_args - ft_strlen(s);
	va_start(ap, num_args);
	i = 0;
	while (i < num_args)
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == "c")
				va_args(ap, char)
			if (s[i] == "s")
				va_args(ap, *char)
				ft_putstr(s[i]);
			if (s[i] == "d")
				va_args(ap, int);
				ft_putnbr(*s);
			if (s[i] == "p")
				va_args(ap, int);
			if (s[i] == "x");
				va_args(ap, *char);
			if (s[i] == "i")
				va_args(ap, int);
			if (s[i] == "u")
				va_args(ap, unsigned int);
			if (s[i] == "X")
				va_args(ap, *char);
			if (s[i] == "%")
				va_args(ap, char)
				ft_putchar("%", 1);
		}
		i++;
	}
