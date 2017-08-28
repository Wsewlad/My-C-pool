# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/10 13:02:04 by vfil              #+#    #+#              #
#    Updated: 2017/08/10 17:06:47 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_display_file
LNAME	=	libdf.a
MAIN	=	main.c
SRC		=	func/*.c	
OSRC	=	ft_putchar.o ft_putstr.o ft_strlen.o
FLAGS	=	-Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME):
	@gcc -c $(SRC) -I .
	@ar rc $(LNAME) $(OSRC)
	@ranlib $(LNAME)
	@gcc $(FLAGS) -o $(NAME) $(MAIN) -L. -ldf

.PHONY: clean
clean:
	@rm -f *.o

.PHONY: fclean
fclean: clean
	@rm -f $(NAME) $(LNAME)

.PHONY: re
re: fclean all
