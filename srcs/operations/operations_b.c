/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 08:36:51 by jveras            #+#    #+#             */
/*   Updated: 2024/03/06 08:36:53 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sb(t_list *b)
{
	swap_list(b);
	ft_printf("sb\n");
}

void	pb(t_list *a, t_list *b)
{
	push_list(a, b);
	ft_printf("pb\n");
}

void	rb(t_list *b)
{
	rotate_list(b);
	ft_printf("rb\n");
}

void	rrb(t_list *b)
{
	rrotate_list(b);
	ft_printf("rrb\n");
}
