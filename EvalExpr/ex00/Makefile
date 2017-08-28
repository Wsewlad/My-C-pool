# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/12 19:30:00 by vfil              #+#    #+#              #
#    Updated: 2017/08/13 15:08:58 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	eval_expr
LNAME	=	libeval.a
SRC		=	*.c
OSRC	=	ft_putchar.o ft_strlen.o ft_putnbr.o eval_expr.o parsers.o
MAIN	=	main.c
FLAGS	=	-Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME):
	@gcc -c $(SRC) -I .
	@ar rc $(LNAME) $(OSRC)
	@ranlib $(LNAME)
	@gcc $(FLAGS) -o $(NAME) $(MAIN) -L. -leval

.PHONY: clean
clean:
	@rm -f *.o

.PHONY: fclean
fclean: clean
	@rm -f $(NAME) $(LNAME)

.PHONY: re
re: fclean all
