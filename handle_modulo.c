#include "ft_printf.h"

void	handle_modulo(t_info *info, va_list arg)
{
	info->c = '%';
	calculate_len(info);
	if (!info->is_minus_flag)
	{
		if (info->width)
			handle_width(info, '%');
		ft_putchar('%');
	}
	else
	{
		ft_putchar('%');
		if (info->width)
			handle_width(info, '%');
	}
}