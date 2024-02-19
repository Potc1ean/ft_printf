/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichpakov <ichpakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:14:37 by ichpakov          #+#    #+#             */
/*   Updated: 2023/11/30 03:19:36 by ichpakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	print_format(char specifier, va_list ap);
int	print_character(int c);
int	ft_printf(const char *format, ...);
int	print_string(char *str);
int	print_digit(long n, int base);
int	print_unsigned_int(long n, int base);
int	print_hex_lower(long n, int base);
int	print_hex_upper(long n, int base);
int	print_void_pointer(unsigned long n, unsigned int base);
int	put_void_pointer(unsigned long n, unsigned int base);

#endif
