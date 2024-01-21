#include "ft_printf.h"

int	putVoidPointer(unsigned long n, unsigned int base)
{
	if (n == 0)
		return (write(1, "(null)", 6));
	else
	{
		write(1, "0x", 2);
		return (printVoidPointer(n, base) + 2);
	}
}

int	printVoidPointer(unsigned long n, unsigned int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < base)
		return (printChar(symbols[n]));
	else
	{
		count += printVoidPointer((n / base), base);
		return (count + printVoidPointer((n % base), base));
	}
}
