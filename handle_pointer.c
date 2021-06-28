#include "ft_printf.h"

void	handle_pointer(t_info *info, va_list arg)
{
	unsigned long	i;

	i = va_arg(arg, unsigned long);//fetch data
	if (i == 0)
		info->s = ft_strdup("0");
	info->s = ft_dec_to_hex(i, 0);
	calculate_len(info);
	info->width_val -= 2;
	if (!info->is_minus_flag)
	{
		if (info->is_precision)
			fix_precision(info, 'p');
		if (info->is_width)
			handle_width(info, 'p');
		ft_putstr("0x", 2);
		if (info->is_precision)
			handle_precision(info, 'p');
		print(info, 'p');
	}
	else
	{
		if (info->is_precision)
			fix_precision(info, 'p');
		if (info->is_precision)
			handle_precision(info, 'p');
		ft_putstr("0x", 2);
		print(info, 'p');
		if (info->is_width)
			handle_width(info, 'p');
	}
}