/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:22:11 by zel-hach          #+#    #+#             */
/*   Updated: 2021/12/14 20:46:30 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	int	length;

	length = 0;
	if (nb < 10)
		length += ft_putchar(nb + '0');
	else
	{
		length += ft_putunbr(nb / 10);
		length += ft_putunbr(nb % 10);
	}
	return (length);
}
