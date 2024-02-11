/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras2 <jveras2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:53:41 by jveras2           #+#    #+#             */
/*   Updated: 2023/10/19 14:31:06 by jveras2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*new_s;

	new_s = (char *) s;
	while (*new_s && *new_s != c)
		new_s++;
	if (*new_s == c)
		return (new_s);
	return (NULL);
}
