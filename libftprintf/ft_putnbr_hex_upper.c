/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 03:08:53 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/24 19:27:38 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hex_upper(unsigned int n)
{
	int		i;
	char	*a;

	a = "0123456789ABCDEF";
	i = 0;
	if (n >= 16)
	{
		i += ft_putnbr_hex_upper(n / 16);
		i += ft_putnbr_hex_upper(n % 16);
	}
	else
		i += ft_putchar(a[n]);
	return (i);
}
