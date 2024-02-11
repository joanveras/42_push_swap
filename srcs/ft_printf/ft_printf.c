/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:56:06 by jveras            #+#    #+#             */
/*   Updated: 2023/11/07 08:26:54 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libftprintf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		nchar;
	va_list	ap;

	nchar = 0;
	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			nchar = ft_check_args(format, i, nchar, ap);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			nchar++;
		}
		i++;
	}
	va_end(ap);
	return (nchar);
}
