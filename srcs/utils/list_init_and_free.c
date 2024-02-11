#include "../../includes/push_swap.h"

t_list	*initialize_list(void)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	list->head = NULL;
	list->tail = NULL;
	return (list);
}

void	free_list(t_list *list)
{
	t_node	*tmp;
	t_node	*current;

	current = list->head;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	free(list);
}
