#include "ft_printf.h"

void	handle_hex(t_info *info, va_list arg)
{
	long long int	i;

	i = va_arg(arg, long long int);
	info->s = ft_dec_to_hex(i, 0);
	calculate_len(info);
	if (!info->is_minus_flag)
	{
		if (info->is_precision)
			fix_precision(info, 'x');
		if (info->width)
			handle_width(info, 'x');
		if (info->is_precision)
			handle_precision(info, 'x');
		print(info, 'x');
	}
	else
	{
		if (info->is_precision)
			fix_precision(info, 'x');
		if (info->is_precision)
			handle_precision(info, 'x');
		print(info, 'x');
		if (info->width)
			handle_width(info, 'x');
	}
}


void	handle_heX(t_info *info, va_list arg)
{
	long long int	i;

	i = va_arg(arg, long long int);
	info->s = ft_dec_to_hex(i, 1);
	calculate_len(info);
	if (!info->is_minus_flag)
	{
		if (info->is_precision)
			fix_precision(info, 'X');
		if (info->width)
			handle_width(info, 'X');
		if (info->is_precision)
			handle_precision(info, 'X');
		print(info, 'X');
	}
	else
	{
		if (info->is_precision)
			fix_precision(info, 'X');
		if (info->is_precision)
			handle_precision(info, 'X');
		print(info, 'X');
		if (info->width)
			handle_width(info, 'X');
	}
}
