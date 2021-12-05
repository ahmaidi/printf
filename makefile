# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 18:25:26 by otman             #+#    #+#              #
#    Updated: 2021/12/05 22:34:00 by ahmaidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_hexa.c ft_addr.c
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
OBJS = $(SRCS:.c=.o)
all: $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)
	@echo "files objects created "

$(NAME): $(OBJS)
	$(AR) $@ $^
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re