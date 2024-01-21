#include "ft_printf.h"

int	printFormat(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += printChar(va_arg(ap, int));
	else if (specifier == 's')
		count += printString(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += printDigit((long)(va_arg(ap, int)), 10);
	else if (specifier == 'u')
		count += printUnsignedInt((long)(va_arg(ap, int)), 10);
	else if (specifier == 'x')
		count += printHexLower((long)(va_arg(ap, unsigned int)), 16);
	else if (specifier == 'X')
		count += printHexUpper((long)(va_arg(ap, unsigned int)), 16);
	else if (specifier == 'p')
		count += putVoidPointer((unsigned long)(va_arg(ap, void *)), 16);
	else
		count += write(1, &specifier, 1);
	return (count);
}