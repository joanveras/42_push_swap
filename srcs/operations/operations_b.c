#include "../../includes/push_swap.h"

void	sb(t_list *b)
{
	swap_list(b);
	ft_printf("sb\n");
}

void	pb(t_list *a, t_list *b)
{
	push_list(a, b);
	ft_printf("pb\n");
}

void	rb(t_list *b)
{
	rotate_list(b);
	ft_printf("rb\n");
}

void	rrb(t_list *b)
{
	rrotate_list(b);
	ft_printf("rrb\n");
}
