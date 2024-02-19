/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichpakov <ichpakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:16:46 by ichpakov          #+#    #+#             */
/*   Updated: 2023/11/30 05:24:49 by ichpakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_digit(long n, int base)
{
	int	count;
	int	r;

	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, base) + 1);
	}
	else if (n < base)
	{
		return (print_character(n + '0'));
	}
	else
	{
		r = count;
		count = print_digit(n / base, base);
		if (r > count)
			return (-1);
		return (count + print_digit(n % base, base));
	}
}
