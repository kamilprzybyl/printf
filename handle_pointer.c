#include "ft_printf.h"

static void	handle_minus_flag(t_info *info)
{
	if (info->is_prec)
		fix_prec(info, 'p');
	if (info->is_width)
		handle_width(info, 'p');
	ft_putstr("0x", 2);
	if (info->is_prec)
		handle_prec(info, 'p');
	print(info, 'p');
}

void	handle_pointer(t_info *info, va_list arg)
{
	unsigned long	i;

	i = va_arg(arg, unsigned long);
	if (i == 0)
		info->s = ft_strdup("0");
	if (!(info->s = ft_dec_to_hex(i, 0)))
		return ;
	calculate_len(info);
	info->width_val -= 2;
	if (!info->is_minus_flag)
		handle_minus_flag(info);
	else
	{
		if (info->is_prec)
			fix_prec(info, 'p');
		if (info->is_prec)
			handle_prec(info, 'p');
		ft_putstr("0x", 2);
		print(info, 'p');
		if (info->is_width)
			handle_width(info, 'p');
	}
}
