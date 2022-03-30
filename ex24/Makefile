# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 21:25:42 by harndt            #+#    #+#              #
#    Updated: 2022/03/30 14:47:30 by harndt           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
SRCS_FILES	=	srcs/ft_putchar.c	srcs/ft_putstr.c	srcs/ft_strcmp.c	\
				srcs/ft_strlen.c	srcs/ft_swap.c
HEADER		=	./includes/
AR			=	ar rc
RM			=	rm -rf
OBJS		=	$(SRCS:srcs/%.c=%.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) -I $(HEADER)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
