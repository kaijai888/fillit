# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzeng <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/27 15:32:45 by kzeng             #+#    #+#              #
#    Updated: 2016/09/27 15:32:46 by kzeng            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CC = gcc
CFLAG = -c -Wall -Werror -Wextra
OFLAG = -Wall -Werror -Wextra -o
SRC_NAME = ft_fillit.c ft_fillfunct1.c ft_fillfunct2.c ft_fillplace1.c \
			ft_fillplace2.c ft_fillplace3.c ft_fillreset1.c ft_fillreset2.c \
			ft_fillmem.c
OBJ_NAME = $(SRC_NAME:.c=.o)
RM = /bin/rm -f
INCL = -I libfillit.h

.PHONY: all clean fclean re

all: $(OBJ_NAME) $(NAME)

$(OBJ_NAME):
	$(CC) $(CFLAG) $(SRC_NAME)

$(NAME):
	$(CC) $(OFLAG) $(NAME) $(OBJ_NAME)

clean: 
	$(RM) $(OBJ_NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all