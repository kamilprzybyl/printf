#include "ft_printf.h"

void	handle_hex(t_info *info, va_list arg)
{
	int		i;
	char	*hex;

	i = va_arg(arg, int);
	hex = ft_dec_to_hex(i, 0);
	ft_putstr(hex);
}


void	handle_heX(t_info *info, va_list arg)
{
	int		i;
	char	*hex;

	i = va_arg(arg, int);
	hex = ft_dec_to_hex(i, 1);
	ft_putstr(hex);
}
