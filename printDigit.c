#include "ft_printf.h"

int	printDigit(long n, int base)
{
    int	count;

	if (n < 0)
	{
		write(1, "-", 1);
		return (printDigit(-n, base) + 1);
	}
	else if (n < base)
	{
		return (printChar(n + '0'));
	}
	else
	{
		count = printDigit(n / base, base);
		return (count + printDigit(n % base, base));
	}
}
