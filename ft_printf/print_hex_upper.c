/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichpakov <ichpakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:20:17 by ichpakov          #+#    #+#             */
/*   Updated: 2023/11/30 05:04:16 by ichpakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_upper(int long n, int base)
{
	int		count;
	char	*symbols;
	int		r;

	count = 0;
	symbols = "0123456789ABCDEF";
	if (n < base)
		return (print_character(symbols[n]));
	else
	{
		r = count;
		count += print_hex_upper((n / base), base);
		if (r > count)
			return (-1);
		return (count + print_hex_upper((n % base), base));
	}
}
