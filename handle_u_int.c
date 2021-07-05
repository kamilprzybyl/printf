#include "ft_printf.h"

void	handle_u_int(t_info *info, va_list arg)
{
	unsigned int		i;

	i = va_arg(arg, unsigned int);
	if (!(info->s = ft_utoa(i)))
		return ;
	calculate_len(info);
	if (!info->is_minus_flag)
	{
		if (info->is_prec)
			fix_prec(info, 'u');
		if (info->is_width)
			handle_width(info, 'u');
		if (info->is_prec)
			handle_prec(info, 'u');
		print(info, 'u');
	}
	else
	{
		if (info->is_prec)
			fix_prec(info, 'u');
		if (info->is_prec)
			handle_prec(info, 'u');
		print(info, 'u');
		if (info->is_width)
			handle_width(info, 'u');
	}
}
