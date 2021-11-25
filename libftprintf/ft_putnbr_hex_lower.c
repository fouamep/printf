/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 03:06:35 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/24 21:44:36 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hex_lower(unsigned int n)
{
	int		i;
	char	*a;

	a = "0123456789abcdef";
	i = 0;
	if (n >= 16)
	{
		i += ft_putnbr_hex_lower(n / 16);
		i += ft_putnbr_hex_lower(n % 16);
	}
	else
	{
		i += ft_putchar(a[n]);
	}
	return (i);
}
