# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/08 09:08:19 by vfil              #+#    #+#              #
#    Updated: 2017/08/08 21:14:25 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	do-op
LNAME	=	libdo-op.a
MAIN	=	main.c
SRC		=	ft_putchar.c ft_putnbr.c ft_atoi.c operators.c checking.c
OSRC	=	ft_putchar.o ft_putnbr.o ft_atoi.o operators.o checking.o

.PHONY: all
all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(LNAME) $(OSRC)
	ranlib $(LNAME)
	gcc -Wall -Wextra -Werror -o $(NAME) $(MAIN) -L. -l$(NAME)

.PHONY: clean
clean:
	rm -f *.o

.PHONY: fclean
fclean: clean
	rm -f $(NAME) $(LNAME)

.PHONY: re
re: fclean all
