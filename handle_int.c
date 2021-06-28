#include "ft_printf.h"

static void	handle_positive(t_info *info, int i)
{
	info->s = ft_itoa(i);
	calculate_len(info);
	if (!info->is_minus_flag)
	{
		if (info->is_precision)
			fix_precision(info, 'd');
		if (info->is_width)
			handle_width(info, 'd');
		if (info->is_precision)
			handle_precision(info, 'd');
		print(info, 'd');
	}
	else
	{
		if (info->is_precision)
			fix_precision(info, 'd');
		if (info->is_precision)
			handle_precision(info, 'd');
		print(info, 'd');
		if (info->is_width)
			handle_width(info, 'd');
	}
}

static void	handle_negative(t_info *info, int i)
{
	info->s = ft_itoa(ft_abs(i));
	calculate_len(info);
	info->width_val -= 1;
	if (!info->is_minus_flag)
	{
		if (info->is_precision)
			fix_precision(info, 'd');
		if (info->is_zero_flag)
			ft_putchar('-');
		if (info->is_width)
			handle_width(info, 'd');
		if (!info->is_zero_flag)
			ft_putchar('-');
		if (info->is_precision)
			handle_precision(info, 'd');
		print(info, 'd');
	}
	else
	{
		if (info->is_precision)
			fix_precision(info, 'd');
		ft_putchar('-');
		if (info->is_precision)
			handle_precision(info, 'd');
		print(info, 'd');
		if (info->is_width)
			handle_width(info, 'd');
	}
}

void	handle_integer(t_info *info, va_list arg)
{
	int		i;

	i = va_arg(arg, int);
	if (i < 0)
		handle_negative(info, i);
	else
		handle_positive(info, i);
}

