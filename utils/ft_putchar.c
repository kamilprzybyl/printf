#include "../ft_printf.h"

void	ft_putchar(char c)
{
	g_ret++;
	write(1, &c, 1);
}
