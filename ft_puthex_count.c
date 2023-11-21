/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:42:09 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/21 18:25:16 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_counter(unsigned long nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 16;
		count++;
	}
	return (count);
}

int	ft_puthex_count(unsigned long nb, char identifier, int *ptr)
{
	int		count;
	char	*dict;

	count = 0;
	dict = "0123456789abcdef";
	if (nb < 16)
	{
		if (identifier == 'X' && dict[nb] >= 97 && dict[nb] <= 102)
			ft_putchar_count(dict[nb] - 32, ptr);
		else
			ft_putchar_count(dict[nb], ptr);
	}
	else
	{
		ft_puthex_count(nb / 16, identifier, ptr);
		ft_puthex_count(nb % 16, identifier, ptr);
	}
	return (hex_counter(nb));
}
