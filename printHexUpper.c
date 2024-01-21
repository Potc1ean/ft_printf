#include "ft_printf.h"

int	printHexUpper(long n, int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789ABCDEF";
	if (n < base)
		return (printChar(symbols[n]));
	else
	{
		count += printHexUpper((n / base), base);
		return (count + printHexUpper((n % base), base));
	}
}