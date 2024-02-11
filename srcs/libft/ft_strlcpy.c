/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras2 <jveras2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:46:52 by jveras2           #+#    #+#             */
/*   Updated: 2023/10/23 09:29:10 by jveras2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	char	*s;

	s = (char *) src;
	i = 0;
	if (size == 0)
		return (ft_strlen(s));
	while (s[i] && i < size - 1)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(s));
}
