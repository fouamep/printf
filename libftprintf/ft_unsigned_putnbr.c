/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 03:27:56 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/24 19:16:59 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_unsigned_putnbr(unsigned int n)
{
	int	i;

	i = 0;
	if (0 <= n && n <= 9)
	{
		i += ft_putchar(n + '0');
	}
	else
	{
		i += ft_unsigned_putnbr(n / 10);
		i += ft_unsigned_putnbr(n % 10);
	}
	return (i);
}
