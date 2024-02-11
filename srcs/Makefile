### Variables

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



### Rules

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)


all: $(NAME)


clean:
	@ $(RM) $(OBJS)


fclean: clean
	@ $(RM) $(NAME)


re: fclean all


.PHONY: all clean fclean re
