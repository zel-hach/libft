/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:45:11 by zel-hach          #+#    #+#             */
/*   Updated: 2021/12/15 13:55:37 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, const char format)
{
	int	p;

	p = 0;
	if (format == 'c')
		p += ft_putchar(va_arg(ap, int));
	else if (format == 's')
		p += ft_putstr(va_arg(ap, char *));
	else if (format == 'p')
		p += ft_putptr((unsigned long long)va_arg(ap, void *),
				"0123456789abcdef");
	else if (format == 'd' || format == 'i')
		p += ft_putnbr(va_arg(ap, int));
	else if (format == 'u')
		p += ft_putunbr(va_arg(ap, unsigned int));
	else if (format == 'x')
		p += ft_puthexa(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		p += ft_puthexa(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (format == '%')
		p += write(1, "%", 1);
	return (p);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		print_lenght;

	i = 0;
	print_lenght = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			print_lenght += ft_format(ap, format[i]);
		}
		else
			print_lenght += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (print_lenght);
}
