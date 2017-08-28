# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/08 18:16:58 by vfil              #+#    #+#              #
#    Updated: 2017/08/08 20:29:01 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_advanced_do-op
LNAME	=	libdo-op.a
MAIN	=	main.c
SRC		=	ft_putchar.c ft_putnbr.c ft_atoi.c operators.c checking.c ft_usage.c
OSRC	=	ft_putchar.o ft_putnbr.o ft_atoi.o operators.o checking.o ft_usage.o

.PHONY: all
all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(LNAME) $(OSRC)
	ranlib $(LNAME)
	gcc -Wall -Wextra -Werror -o $(NAME) $(MAIN) -L. -ldo-op

.PHONY: clean
clean:
	rm -f *.o

.PHONY: fclean
fclean: clean
	rm -f $(NAME) $(LNAME)

.PHONY: re
re: fclean all
