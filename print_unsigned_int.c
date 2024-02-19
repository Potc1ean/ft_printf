/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichpakov <ichpakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:22:24 by ichpakov          #+#    #+#             */
/*   Updated: 2023/11/30 03:22:27 by ichpakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned_int(long n, int base)
{
	if (n < 0)
		return (print_digit((n + 1 + 4294967295), base));
	else
		return (print_digit(n, base));
}
