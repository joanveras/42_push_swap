#include "../../includes/push_swap.h"

int	list_size(t_list *list)
{
	int		counter;
	t_node	*current;

	counter = 0;
	current = list->head;
	while (current)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}

t_bool	is_ascending(t_list *list)
{
	t_node	*current;
	t_node	*next;

	current = list->head;
	while (current->next)
	{
		next = current->next;
		if (current->content < next->content)
			current = current->next;
		else
			return (FALSE);
	}
	return (TRUE);
}

t_bool	is_descending(t_list *list)
{
	t_node	*current;
	t_node	*next;

	current = list->head;
	while (current->next)
	{
		next = current->next;
		if (current->content > next->content)
			current = current->next;
		else
			return (FALSE);
	}
	return (TRUE);
}
