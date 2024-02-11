/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras2 <jveras2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:20:51 by jveras2           #+#    #+#             */
/*   Updated: 2023/10/30 10:02:51 by jveras2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*new_s;

	size = ft_strlen(s);
	new_s = malloc(sizeof(char) * size + 1);
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, s, size + 1);
	return (new_s);
}
