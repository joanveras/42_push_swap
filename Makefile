# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 09:06:55 by jveras            #+#    #+#              #
#    Updated: 2024/03/06 16:28:34 by jveras           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRCS =	$(wildcard srcs/utils/*.c) \
		$(wildcard srcs/libft/*.c) \
		$(wildcard srcs/ft_printf/*.c) \
		$(wildcard srcs/operations/*.c) \
		$(wildcard srcs/sort_algorithms/*.c) \
		$(wildcard srcs/ft_printf/libftprintf/*.c) \
		$(wildcard srcs/sort_algorithms/radix_sort/*.c)

OBJS =  $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf


### Rules #############################################

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	$(CC) -g push_swap.c $(CFLAGS) $(SRCS) -o push_swap
	

all: $(NAME)


clean:
	@ $(RM) $(OBJS)


fclean: clean
	@ $(RM) $(NAME)
	@ $(RM)	push_swap


re: fclean all


.PHONY: all clean fclean re
