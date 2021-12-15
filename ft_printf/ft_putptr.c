/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:21:11 by zel-hach          #+#    #+#             */
/*   Updated: 2021/12/14 20:45:32 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_ptr(unsigned long long nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len ++;
		nb = nb / 16;
	}
	return (len);
}

void	p_ptr(unsigned long long nb, const char *base)
{
	if (nb >= 16)
	{
		p_ptr(nb / 16, base);
		p_ptr(nb % 16, base);
	}
	else
		ft_putchar(base[nb]);
}

int	ft_putptr(unsigned long long nb, char *base)
{
	int	length;

	length = 0;
	length += write(1, "0x", 2);
	if (nb == 0)
	{
		write(1, "0", 1);
		length++;
	}
	else
	{
		p_ptr(nb, base);
		length += len_ptr(nb);
	}
	return (length);
}
