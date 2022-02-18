# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amr21code <a@n.de>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 09:37:00 by amr21code         #+#    #+#              #
#    Updated: 2022/01/29 13:13:05 by amr21code        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC_C = *.c
SRC_O = *.o

all: $(NAME)

$(NAME):
	cd ./libft/ && make re
	cd ..
	cp libft/libft.a $(NAME)
	gcc -c $(SRC_C) -Werror -Wall -Wextra
	ar rcs $(NAME) $(SRC_O)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
