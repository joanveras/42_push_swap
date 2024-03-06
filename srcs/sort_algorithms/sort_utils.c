/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 08:38:32 by jveras            #+#    #+#             */
/*   Updated: 2024/03/06 08:38:34 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
