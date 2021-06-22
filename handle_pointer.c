#include "ft_printf.h"

void	handle_pointer(t_info *info, va_list arg)
{
	char	*hex;
	int		i;

	i = va_arg(arg, int);
	hex = ft_dec_to_hex(i, 0);
	ft_putstr("0x");
	ft_putstr(hex);
}
