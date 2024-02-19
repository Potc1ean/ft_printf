/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichpakov <ichpakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:21:30 by ichpakov          #+#    #+#             */
/*   Updated: 2023/11/30 05:14:13 by ichpakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *str)
{
	int	count;
	int	r;

	count = 0;
	if (!str)
	{
		print_string("(null)");
		return (6);
	}
	while (*str)
	{
		r = count;
		count += print_character((int)*str);
		if (r > count)
			return (-1);
		str++;
	}
	return (count);
}
