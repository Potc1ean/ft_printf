/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichpakov <ichpakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:13:14 by ichpakov          #+#    #+#             */
/*   Updated: 2023/11/30 05:44:34 by ichpakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		r;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		r = count;
		if (*format == '%')
		{
			count += print_format(*++format, ap);
			if (count < r)
				return (-1);
		}
		else
		{
			count += write(1, format, 1);
			if (r > count)
				return (-1);
		}
		++format;
	}
	va_end(ap);
	return (count);
}
