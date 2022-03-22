# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anruland <anruland@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 09:37:00 by anruland         #+#    #+#              #
#    Updated: 2022/03/22 10:15:39 by anruland         ###   ########.fr        #
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
