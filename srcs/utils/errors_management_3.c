/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_management_3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:06:50 by jveras            #+#    #+#             */
/*   Updated: 2024/03/11 14:21:37 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	has_duplicate(t_list *a, t_list *b)
{
	if (duplicate(a))
	{
		free_list(a);
		free(b);
		abort();
	}
}
