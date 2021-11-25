# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 22:31:05 by fbouanan          #+#    #+#              #
#    Updated: 2021/11/23 22:39:40 by fbouanan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_putchar.c ft_putnbr_hex_lower.c ft_putnbr_hex_upper.c\
		ft_putnbr.c ft_putstr.c ft_unsigned_putnbr.c ft_printf.c\
		ft_address.c

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

OBJS = ${SRCS:.c=.o}

%.o : %.c
	${CC} $(CFLAGS) -c $< -o $@  
	${AR} ${NAME} $@

all : $(NAME)

$(NAME) : ${OBJS}

clean :
	rm -f ${OBJS}
fclean : clean
	rm -f ${NAME}

re : fclean all 

.PHONY : re fclean clean all
