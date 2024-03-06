/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_management_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:31:49 by jveras            #+#    #+#             */
/*   Updated: 2024/03/06 16:28:15 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static long	ft_atol(const char *nptr)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = sign * -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = (result * 10) + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}

static t_bool	check_size(char *s)
{
	int		len;
	long	n;

	len = ft_strlen(s);
	if (ft_strchr(s, '-') && len > 11)
		return (TRUE);
	else if (!ft_strchr(s, '-') && len > 10)
		return (TRUE);
	n = ft_atol(s);
	if (n > INT_MAX || n < INT_MIN)
		return (TRUE);
	return (FALSE);
}

t_bool	invalid_arg_2(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (check_size(argv[i]))
			return (TRUE);
		i++;
	}
	return (FALSE);
}
