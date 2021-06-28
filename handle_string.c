#include "ft_printf.h"

void	handle_string(t_info *info, va_list arg)
{
	info->s = va_arg(arg, char *);
	if (info->s == NULL)
		info->s = ft_strdup("(null)");
	calculate_len(info);
	if (!info->is_minus_flag)
	{
		if (info->is_precision)
			fix_precision(info, 's');
<<<<<<< HEAD
		if (info->is_width)
=======
		if (info->width)
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
			handle_width(info, 's');
		if (info->is_precision)
			handle_precision(info, 's');
		print(info, 's');
	}
	else
	{
		if (info->is_precision)
			fix_precision(info, 's');
		if (info->is_precision)
			handle_precision(info, 's');
		print(info, 's');
<<<<<<< HEAD
		if (info->is_width)
=======
		if (info->width)
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
			handle_width(info, 's');
	}
}
