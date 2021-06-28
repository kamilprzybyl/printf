#include "ft_printf.h"

void	handle_modulo(t_info *info, va_list arg)
{
	info->c = '%';
<<<<<<< HEAD
	info->len = 1;
	if (!info->is_minus_flag)
	{
		if (info->is_width)
=======
	calculate_len(info);
	if (!info->is_minus_flag)
	{
		if (info->width)
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
			handle_width(info, '%');
		ft_putchar('%');
	}
	else
	{
		ft_putchar('%');
<<<<<<< HEAD
		if (info->is_width)
=======
		if (info->width)
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
			handle_width(info, '%');
	}
}