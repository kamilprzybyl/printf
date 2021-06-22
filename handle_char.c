#include "ft_printf.h"

void	handle_char(t_info *info, va_list arg)
{
	int	c = va_arg(arg, int);
	ft_putchar(c);
}

void	handle_u_char(t_info *info, va_list arg)
{
	unsigned char u = va_arg(arg, int);
	ft_putchar(u);
}