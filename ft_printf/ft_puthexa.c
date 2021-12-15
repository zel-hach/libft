/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:25:07 by zel-hach          #+#    #+#             */
/*   Updated: 2021/12/14 20:46:04 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_hexadecimal(unsigned int nb)
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

void	p_hexadecimal(unsigned int nb, char *base)
{
	if (nb >= 16)
	{
		p_hexadecimal(nb / 16, base);
		p_hexadecimal(nb % 16, base);
	}
	else
		ft_putchar(base[nb]);
}

int	ft_puthexa(unsigned int nb, char *base)
{
	if (nb == 0)
		return (write(1, "0", 1));
	p_hexadecimal(nb, base);
	return (len_hexadecimal(nb));
}
