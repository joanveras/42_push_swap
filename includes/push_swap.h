/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:13:56 by jveras            #+#    #+#             */
/*   Updated: 2024/03/11 14:21:54 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libftprintf.h"
# include "libft.h"

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

typedef struct s_node
{
	int				index;
	int				content;
	struct s_node	*next;
}					t_node;

typedef struct s_list
{
	t_node	*head;
	t_node	*tail;
}			t_list;

// error handling
void	abort(void);
void	no_arguments(int argc);

// operations
void	sa(t_list *a);
void	ra(t_list *a);
void	rra(t_list *a);
void	pa(t_list *a, t_list *b);

void	sb(t_list *b);
void	rb(t_list *b);
void	rrb(t_list *b);
void	pb(t_list *a, t_list *b);

void	ss(t_list *a, t_list *b);
void	rr(t_list *a, t_list *b);
void	rrr(t_list *a, t_list *b);

// sort algorithms
void	radix_sort(t_list *a, t_list *b);
void	sort_2_3(t_list *a, t_list *b, int size);
void	sort_4_5(t_list *a, t_list *b, int size);

// error handling
void	has_duplicate(t_list *a, t_list *b);

// list utils & operations utils...
void	free_mat(char **mat);
void	free_list(t_list *list);
void	swap_list(t_list *list);
void	print_list(t_list *list);
void	index_stack(t_list *list);
void	rotate_list(t_list *list);
void	rrotate_list(t_list *list);
void	push_list(t_list *a, t_list *b);
void	fill_stack(int argc, char **argv, t_list *list);
void	add_node_to_top(int cont, int indx, t_list *list);

t_list	*initialize_list(void);

// sort utils & error handling
int		list_size(t_list *list);

char	*remove_extra_spaces(char *s);

t_bool	duplicate(t_list *a);
t_bool	is_only_space(char *s);
t_bool	invalid_arg_1(char **argv);
t_bool	invalid_arg_2(char **argv);
t_bool	is_ascending(t_list *list);
t_bool	is_descending(t_list *list);

#endif