#include "ft_printf.h"

int printChar(int c)
{
    return(write(1, &c, 1));
}