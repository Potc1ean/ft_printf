#include "ft_printf.h"

int	printUnsignedInt(long n, int base)
{
	if (n < 0)
		return (printDigit((n + 1 + 4294967295), base));
	else
		return (printDigit(n, base));
}