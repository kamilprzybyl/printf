#include "ft_printf.h"

void	handle_pointer(t_info *info, va_list arg)
{
	char	*hex;
	int		i;

	i = va_arg(arg, int);//fetch data
	hex = ft_dec_to_hex(i, 0);
	if (info->width && !info->is_minus_flag)
		handle_width(info, hex, 'x');
	ft_putstr("0x");
	ft_putstr(hex);
	if (info->width && info->is_minus_flag)
		handle_width(info, hex, 'x');
	free(hex);
}
