#include "ft_printf.h"

void	handle_modulo(t_info *info, va_list arg)
{
	info->c = '%';
	info->len = 1;
	if (!info->is_minus_flag)
	{
		if (info->is_width)
			handle_width(info, '%');
		ft_putchar('%');
	}
	else
	{
		ft_putchar('%');
		if (info->is_width)
			handle_width(info, '%');
	}
}
