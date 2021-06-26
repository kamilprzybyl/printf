#include "ft_printf.h"

void	ft_putchar(char c)
{
	len++;
	write(1, &c, 1);
}
