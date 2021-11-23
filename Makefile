# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 12:55:12 by iel-mach          #+#    #+#              #
#    Updated: 2021/11/23 01:45:00 by iel-mach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
SRC = ft_adresse.c \
	  ft_ft.c \
	  ft_len.c \
	  ft_printf.c \
	  ft_putchar.c \
	  ft_putnbr_base.c \
	  ft_putnbr.c \
	  ft_putstr.c \
	  ft_strlen.c
OBJS = ${SRC:.c=.o}
FLAGS = -Wall -Wextra -Werror
ARG = -c

all : $(NAME)

$(NAME): $(OBJS)
		 ar -rc $(NAME) $(OBJS)
	
$(OBJS):
	$(CC) $(FLAGS) $(SRC) $(ARG)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all
