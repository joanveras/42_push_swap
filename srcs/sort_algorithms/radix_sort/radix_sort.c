/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 08:38:52 by jveras            #+#    #+#             */
/*   Updated: 2024/03/11 08:50:55 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

static int	get_max_bits(t_list *list)
{
	int		max;
	int		max_bits;
	t_node	*current;

	current = list->head;
	max = current->index;
	max_bits = 0;
	while (current)
	{
		if (current->index > max)
			max = current->index;
		current = current->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

static void	sort(t_list *a, t_list *b, int size, int max_bits)
{
	int		i;
	int		j;
	t_node	*current;

	i = 0;
	current = a->head;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			current = a->head;
			if (((current->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (list_size(b) != 0)
			pa(a, b);
		i++;
	}
}

void	radix_sort(t_list *a, t_list *b)
{
	int		size;
	int		max_bits;

	if (is_ascending(a))
		return ;
	size = list_size(a);
	max_bits = get_max_bits(a);
	sort(a, b, size, max_bits);
}
