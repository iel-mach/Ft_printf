/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 01:21:20 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/23 08:11:51 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_condetion(const char format, va_list arguments)
{
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(arguments, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(arguments, char *)));
	else if (format == 'c')
		return (ft_putchar(va_arg(arguments, int)));
	else if (format == 'x')
		return (ft_putnbr_base(
				va_arg(arguments, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_putnbr_base(
				va_arg(arguments, unsigned int), "0123456789ABCDEF"));
	else if (format == 'u')
		return (ft_putnbr_base(va_arg(arguments, unsigned int), "0123456789"));
	else if (format == 'p')
		return (ft_adresse(va_arg(arguments, unsigned long)));
	else
		return (ft_putchar('%'));
}

int	ft_printf(const char *format, ...)
{
	va_list		arguments;
	int			i;
	int			rut;

	i = 0;
	rut = 0;
	va_start (arguments, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			rut += ft_condetion(format[i], arguments);
		}
		else
			rut += ft_putchar(format[i]);
		i++;
	}
	va_end(arguments);
	return (rut);
}
