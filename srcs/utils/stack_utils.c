#include "../../includes/push_swap.h"

void	add_node_to_top(int cont, int indx, t_list *list)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->index = indx;
	new_node->content = cont;
	if (!list->head)
	{
		list->head = new_node;
		list->tail = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = list->head;
		list->head = new_node;
	}
}

static void	add_node_to_bottom(int cont, int indx, t_list *list)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->index = indx;
	new_node->content = cont;
	if (!list->head)
	{
		list->head = new_node;
		list->tail = new_node;
		new_node->next = NULL;
	}
	else
	{
		list->tail->next = new_node;
		list->tail = new_node;
		new_node->next = NULL;
	}
}

void	print_list(t_list *list)
{
	t_node *current;

	current = list->head;
	while (current)
	{
		ft_printf("%d ", current->content);
		current = current->next;
	}
}

static void	numbers_n_str(char *s, int index, t_list *list)
{
	char	*cpy;

	cpy = ft_strdup(s);
	remove_extra_spaces(cpy);
	while (ft_strchr(cpy, ' '))
	{
		add_node_to_bottom(ft_atoi(cpy), index, list);
		ft_memcpy(cpy, ft_strchr(cpy, ' ') + 1, ft_strlen(ft_strchr(cpy, ' ')));
	}
	if (!cpy[0])
	{
		free(cpy);
		return ;
	}
	add_node_to_bottom(ft_atoi(cpy), index, list);
	free(cpy);
}

void	fill_stack(int	argc, char **argv, t_list *list)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			if (is_only_space(argv[i]))
				abort();
			numbers_n_str(argv[i], 0, list);
			i++;
		}
	}
}
