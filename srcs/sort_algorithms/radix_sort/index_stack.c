/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 08:38:46 by jveras            #+#    #+#             */
/*   Updated: 2024/03/06 09:27:59 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

static t_node	*get_next_min(t_list *list)
{
	t_node	*current;
	t_node	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	current = list->head;
	if (current)
	{
		while (current)
		{
			if ((current->index == 0)
				&& (!has_min || current->content < min->content))
			{
				min = current;
				has_min = 1;
			}
			current = current->next;
		}
	}
	return (min);
}

void	index_stack(t_list *list)
{
	t_node	*current;
	int		index;

	index = 0;
	current = get_next_min(list);
	while (current)
	{
		current->index = index;
		current = get_next_min(list);
		index++;
	}
}
