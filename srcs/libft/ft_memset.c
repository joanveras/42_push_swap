/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras2 <jveras2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:14:56 by jveras2           #+#    #+#             */
/*   Updated: 2023/10/23 12:15:38 by jveras2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*new_str;

	i = 0;
	new_str = str;
	while (n--)
	{
		new_str[i] = c;
		i++;
	}
	return (new_str);
}
