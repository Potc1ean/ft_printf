/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichpakov <ichpakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:18:10 by ichpakov          #+#    #+#             */
/*   Updated: 2023/11/30 05:23:25 by ichpakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_character(va_arg(ap, int));
	else if (specifier == 's')
		count += print_string(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit((long)(va_arg(ap, int)), 10);
	else if (specifier == 'u')
		count += print_unsigned_int((long)(va_arg(ap, int)), 10);
	else if (specifier == 'x')
		count += print_hex_lower((long)(va_arg(ap, unsigned int)), 16);
	else if (specifier == 'X')
		count += print_hex_upper((long)(va_arg(ap, unsigned int)), 16);
	else if (specifier == 'p')
		count += put_void_pointer((unsigned long)(va_arg(ap, void *)), 16);
	else if (specifier == '%')
		count += write(1, &specifier, 1);
	return (count);
}
