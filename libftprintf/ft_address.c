/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:50:05 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/24 22:59:03 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_hex_address(unsigned long n)
{
	int		i;
	char	*a;

	a = "0123456789abcdef";
	i = 0;
	if (n >= 16)
	{
		i += ft_hex_address(n / 16);
		i += ft_hex_address(n % 16);
	}
	else
	{
		i += ft_putchar(a[n]);
	}
	return (i);
}

int	ft_address(unsigned long n)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	i += ft_hex_address(n);
	return (i);
}
