#include "ft_printf.h"

void	handle_char(t_info *info, va_list arg)
{
	info->c = va_arg(arg, int);
	info->len = 1;
	if (!info->is_minus_flag)
	{
		if (info->width)
			handle_width(info, 'c');
		ft_putchar(info->c);
	}
	else
	{
		ft_putchar(info->c);
		if (info->width)
			handle_width(info, 'c');
	}
}