# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 20:11:20 by roglopes          #+#    #+#              #
#    Updated: 2023/07/22 17:35:12 by roglopes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= srcs/ft_putchar.c ft_putstr.c ft_strcmp.c\
               ft_strlen.c  ft_swap.c
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all:$(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I/inclues -c $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) *.o

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY:	all clean fclean re