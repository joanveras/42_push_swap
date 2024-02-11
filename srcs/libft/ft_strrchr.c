/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras2 <jveras2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:53:05 by jveras2           #+#    #+#             */
/*   Updated: 2023/10/19 15:45:43 by jveras2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*new_s;

	new_s = (char *) s;
	i = 0;
	j = -1;
	while (new_s[i])
	{
		if (new_s[i] == c)
			j = i;
		i++;
	}
	if (j == -1)
	{
		if (new_s[i] == c)
			return (new_s + i);
		return (NULL);
	}
	return (new_s + j);
}
