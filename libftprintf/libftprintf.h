/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:02:43 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/24 22:59:28 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_strlen(const char *s);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putnbr_hex_lower(unsigned int n);
int	ft_putnbr_hex_upper(unsigned int n);
int	ft_unsigned_putnbr(unsigned int n);
int	ft_address(unsigned long n);

#endif
