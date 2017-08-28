# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/14 19:20:09 by vfil              #+#    #+#              #
#    Updated: 2017/08/14 19:39:04 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	bsq
SRC		=	*.c
FLAGS	=	-Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -o $(NAME) $(SRC)

.PHONY: clean
clean:
	@rm -f *.o

.PHONY: fclean
fclean: clean
	@rm -f $(NAME) $(LNAME)

.PHONY: re
re: fclean all
