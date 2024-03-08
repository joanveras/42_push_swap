/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init_and_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 08:40:23 by jveras            #+#    #+#             */
/*   Updated: 2024/03/08 10:06:50 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	free_mat(char **mat)
{
	int		i;

	i = 0;
	while (mat[i])
	{
		free(mat[i]);
		i++;
	}
	free(mat);
}
