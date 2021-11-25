/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:59:54 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/24 21:42:34 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_puts(const char *format, int i, va_list arg)
{
	int	len;

	len = 0;
	if (format[i] == 'c')
		len += ft_putchar(va_arg(arg, int));
	if (format[i] == 'p')
		len += ft_address(va_arg(arg, unsigned long));
	if (format[i] == 's')
		len += ft_putstr(va_arg(arg, char *));
	if (format[i] == 'i')
		len += ft_putnbr(va_arg(arg, int));
	if (format[i] == 'd')
		len += ft_putnbr(va_arg(arg, int));
	if (format[i] == 'u')
		len += ft_unsigned_putnbr(va_arg(arg, unsigned int));
	if (format[i] == 'x')
		len += ft_putnbr_hex_lower(va_arg(arg, unsigned int));
	if (format[i] == 'X')
		len += ft_putnbr_hex_upper(va_arg(arg, unsigned int));
	if (format[i] == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start (arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_puts(format, i, arg);
				i++;
		}
		else
			len += ft_putchar(format[i++]);
	}
	va_end(arg);
	return (len);
}
