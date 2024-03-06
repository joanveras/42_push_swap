/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 08:36:40 by jveras            #+#    #+#             */
/*   Updated: 2024/03/06 08:36:44 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_list *a)
{
	swap_list(a);
	ft_printf("sa\n");
}

void	pa(t_list *a, t_list *b)
{
	push_list(b, a);
	ft_printf("pa\n");
}

void	ra(t_list *a)
{
	rotate_list(a);
	ft_printf("ra\n");
}

void	rra(t_list *a)
{
	rrotate_list(a);
	ft_printf("rra\n");
}
