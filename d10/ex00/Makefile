# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/07 11:01:00 by vfil              #+#    #+#              #
#    Updated: 2017/08/08 08:55:47 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRC		=	srcs/*.c
OSRC	=	ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEAD	=	includes/

.PHONY: all
all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEAD)
	ar rc $(NAME) $(OSRC)

.PHONY: clean
clean:
	rm -f *.o

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

