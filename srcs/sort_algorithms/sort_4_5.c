#include "../../includes/push_swap.h"

static void	conditions(t_list *a, t_list *b, t_node *top, t_node *next)
{
	t_node	*tail;

	tail = a->tail;
	if (is_descending(a) && list_size(a) == 5)
	{
		pb(a, b);
		ra(a);
	}
	else if (is_descending(a))
		ra(a);
	else if (top->content < next->content && top->content > tail->content)
		ra(a);
	else if (top->content > tail->content && next->content < tail->content)
		ra(a);
	else if (top->content < next->content && list_size(a) == 5)
		pb(a, b);
	else if (is_ascending(a) && (list_size(b) > 0))
		pa(a, b);
	else if (top->content > next->content)
		sa(a);
	else if (top->content < next->content)
		pb(a, b);
}

void	sort_4_5(t_list *a, t_list *b, int size)
{
	if (list_size(a) == size && is_ascending(a))
		return ;
	else
	{
		conditions(a, b, a->head, a->head->next);
		sort_4_5(a, b, size);
	}
}
