#include "../../includes/push_swap.h"

void	sort_2_3(t_list *a, t_list *b, int size)
{
	t_node	*top;
	t_node	*next;
	t_node	*tail;

	top = a->head;
	next = top->next;
	tail = a->tail;
	if (list_size(a) == size && is_ascending(a))
		return ;
	else
	{
		if (is_descending(a))
			ra(a);
		else if (top->content < next->content && top->content > tail->content)
			rra(a);
		else if (top->content > tail->content && next->content < tail->content)
			ra(a);
		else if (is_ascending(a) && list_size(b) > 0)
			pa(a, b);
		else if (top->content < next->content)
			pb(a, b);
		else if (top->content > next->content)
			sa(a);
		sort_2_3(a, b, size);
	}
}
