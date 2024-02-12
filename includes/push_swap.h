#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libftprintf.h"
# include "libft.h"

typedef enum
{
	FALSE,
	TRUE
}	t_bool;

typedef struct	s_node
{
	int				index;
	int				content;
	struct s_node	*next;
}					t_node;

typedef struct	s_list
{
	t_node	*head;
	t_node	*tail;
}			t_list;

// error handling
void	abort(void);

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

// list utils & operations utils...
void	free_list(t_list *list);
void	swap_list(t_list *list);
void	print_list(t_list *list);
void	index_stack(t_list *list);
void	rotate_list(t_list *list);
void	rrotate_list(t_list *list);
void	push_list(t_list *a, t_list *b);
void	fill_stack(int	argc, char **argv, t_list *list);
void	add_node_to_top(int cont, int indx, t_list *list);

t_list	*initialize_list(void);

// sort utils & error handling
int		list_size(t_list *list);

char	*remove_extra_spaces(char *s);

t_bool	duplicate(t_list *a);
t_bool	is_only_space(char *s);
t_bool	invalid_arg(char **argv);
t_bool	is_ascending(t_list *list);
t_bool	is_descending(t_list *list);

#endif