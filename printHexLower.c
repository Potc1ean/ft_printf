#include "ft_printf.h"

int	printHexLower(int long n, int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < base)
		return (printChar(symbols[n]));
	else
	{
		count += printHexLower((n / base), base);
		return (count + printHexLower((n % base), base));
	}
}
