#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	printFormat(char specifier, va_list ap);
int	printChar(int c);
int	ft_printf(const char *format, ...);
int	printString(char *str);
int	printDigit(long n, int base);
int	printUnsignedInt(long n, int base);
int	printHexLower(long n, int base);
int	printHexUpper(long n, int base);
int	printVoidPointer(unsigned long  n, unsigned int base);
int	putVoidPointer(unsigned long n, unsigned int base);

#endif
