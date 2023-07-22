# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 16:38:31 by roglopes          #+#    #+#              #
#    Updated: 2023/07/22 17:20:18 by roglopes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
SRCS	= display_file.c
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all:$(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I/inclues -c $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) *.o

clean:
	$(RM) *.o

fclean:clean
	$(RM) $(NAME)

re:fclean all

.PHONY:all clean fclean re