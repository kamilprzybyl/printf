#include "ft_printf.h"

void	handle_hex(t_info *info, va_list arg)
{
	long long	i;

	i = va_arg(arg, unsigned int);
	if (!(info->s = ft_dec_to_hex(i, 0)))
		return ;
	calculate_len(info);
	if (!info->is_minus_flag)
	{
		if (info->is_prec)
			fix_prec(info, 'x');
		if (info->is_width)
			handle_width(info, 'x');
		if (info->is_prec)
			handle_prec(info, 'x');
		print(info, 'x');
	}
	else
	{
		if (info->is_prec)
			fix_prec(info, 'x');
		if (info->is_prec)
			handle_prec(info, 'x');
		print(info, 'x');
		if (info->is_width)
			handle_width(info, 'x');
	}
}

void	handle_heX(t_info *info, va_list arg)
{
	long long	i;

	i = va_arg(arg, unsigned int);
	if (!(info->s = ft_dec_to_hex(i, 1)))
		return ;
	calculate_len(info);
	if (!info->is_minus_flag)
	{
		if (info->is_prec)
			fix_prec(info, 'X');
		if (info->is_width)
			handle_width(info, 'X');
		if (info->is_prec)
			handle_prec(info, 'X');
		print(info, 'X');
	}
	else
	{
		if (info->is_prec)
			fix_prec(info, 'X');
		if (info->is_prec)
			handle_prec(info, 'X');
		print(info, 'X');
		if (info->is_width)
			handle_width(info, 'X');
	}
}
