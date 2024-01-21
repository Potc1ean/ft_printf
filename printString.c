#include "ft_printf.h"

int	printString(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		printString("(null)");
		return (6);
	}
	while (*str)
	{
		printChar((int)*str);
		count++;
		str++;
	}
	return (count);
}
