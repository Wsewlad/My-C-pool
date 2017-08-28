# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/12 15:24:32 by vfil              #+#    #+#              #
#    Updated: 2017/08/13 22:17:54 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-2
LNAME	=	librush.a
SRC		=	*.c
OSRC	=	ft_putchar.o ft_putstr.o ft_strlen.o create_all.o ft_strcmp.o ft_strcat.o rush00.o rush01.o rush02.o rush03.o rush04.o ft_putnbr.o ft_print_res.o
MAIN	=	main.c
FLAGS	=	-Wall -Wextra -Werror

.PHONY: all
all: $(NAME)
	
$(NAME):
	@gcc -c $(SRC) -I .
	@ar rc $(LNAME) $(OSRC)
	@ranlib $(LNAME)
	@gcc $(FLAGS) -o $(NAME) $(MAIN) -L. -lrush

.PHONY: clean
clean:
	@rm -f *.o

.PHONY: fclean
fclean: clean
	@rm -f $(NAME) $(LNAME)

.PHONY: re
re: fclean all




