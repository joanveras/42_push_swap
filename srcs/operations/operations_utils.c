/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 08:37:25 by jveras            #+#    #+#             */
/*   Updated: 2024/03/06 08:37:29 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_list(t_list *list)
{
	int		tmp_cont;
	int		tmp_indx;
	t_node	*first;
	t_node	*second;

	first = list->head;
	second = first->next;
	tmp_cont = first->content;
	tmp_indx = first->index;
	first->content = second->content;
	first->index = second->index;
	second->content = tmp_cont;
	second->index = tmp_indx;
}

void	push_list(t_list *a, t_list *b)
{
	int		tmp_cont;
	int		tmp_indx;
	t_node	*tmp;
	t_node	*a_top;

	tmp = a->head;
	a_top = a->head;
	tmp_cont = a_top->content;
	tmp_indx = a_top->index;
	a->head = a->head->next;
	free(tmp);
	add_node_to_top(tmp_cont, tmp_indx, b);
}

void	rotate_list(t_list *list)
{
	int 	tmp_cont;
	int		tmp_indx;
	t_node	*current;
	t_node	*after_current;

	current = list->head;
	after_current = current->next;
	tmp_cont = current->content;
	tmp_indx = current->index;
	while (current->next)
	{
		current->content = after_current->content;
		current->index = after_current->index;
		current = current->next;
		after_current = after_current->next;
	}
	current->content = tmp_cont;
	current->index = tmp_indx;
}

void	rrotate_list(t_list *list)
{
	t_node	*last_node;
    t_node	*second_last_node;

	last_node = list->head;
    while (last_node->next)
	{
        second_last_node = last_node;
        last_node = last_node->next;
    }
    second_last_node->next = NULL;
    last_node->next = list->head;
    list->head = last_node;
}
