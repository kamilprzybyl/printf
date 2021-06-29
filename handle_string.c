#include "ft_printf.h"

void	handle_string(t_info *info, va_list arg)
{
	info->s = va_arg(arg, char *);
	if (info->s == NULL)
		info->s = ft_strdup("(null)");
	calculate_len(info);
	if (!info->is_minus_flag)
	{
		if (info->is_prec)
			fix_prec(info, 's');
		if (info->is_width)
			handle_width(info, 's');
		if (info->is_prec)
			handle_prec(info, 's');
		print(info, 's');
	}
	else
	{
		if (info->is_prec)
			fix_prec(info, 's');
		if (info->is_prec)
			handle_prec(info, 's');
		print(info, 's');
		if (info->is_width)
			handle_width(info, 's');
	}
}
