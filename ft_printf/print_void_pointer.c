/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_void_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichpakov <ichpakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:23:13 by ichpakov          #+#    #+#             */
/*   Updated: 2023/11/30 05:14:36 by ichpakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_void_pointer(unsigned long n, unsigned int base)
{
	if (n == 0)
		return (write(1, "0x0", 3));
	else
	{
		write(1, "0x", 2);
		return (print_void_pointer(n, base) + 2);
	}
}

int	print_void_pointer(unsigned long n, unsigned int base)
{
	int		count;
	int		r;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < base)
		return (print_character(symbols[n]));
	else
	{
		r = count;
		count += print_void_pointer((n / base), base);
		if (r > count)
			return (-1);
		return (count + print_void_pointer((n % base), base));
	}
}
