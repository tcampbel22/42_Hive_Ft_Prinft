/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:37:32 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/20 17:36:26 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	digit_counter(long nb, int base)
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
		nb /= base;
		count++;
	}
	return (count);
}

int	ft_putnbr_count(long nb, int base, char identifier)
{
	int	count;
	char *dict;

	count = 0;
	dict = "0123456789abcdef";
	if (nb < 0)
	{
		ft_putchar_count('-');
		ft_putnbr_count(-nb, base, identifier);
	}
	else if (nb < base)
	{
		if (identifier == 'X' && dict[nb] >= 97 && dict[nb] <= 102)
			ft_putchar_count(dict[nb] - 32);
		else
			ft_putchar_count(dict[nb]);
	}
	else
	{
		ft_putnbr_count(nb / base, base, identifier);
		(ft_putnbr_count((nb % base), base, identifier));
	}
	return (digit_counter(nb, base));
}
