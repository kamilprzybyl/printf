#include "ft_printf.h"

// void	handle_u_int(t_info *info, va_list arg)
// {
// 	// char				*s;
// 	// unsigned int		i;

// 	// i = va_arg(arg, unsigned int);
// 	// s = ft_utoa(i);
// 	// if (info->is_precision)
// 	// 	s = handle_precision(info, s, 'u');
// 	// if (info->width && !info->is_minus_flag)
// 	// 	handle_width(info, s, 'u');
// 	// ft_putstr(s);
// 	// if (info->width && info->is_minus_flag)
// 	// 	handle_width(info, s, 'u');
// 	// // free(s);
// }

void	handle_u_int(t_info *info, va_list arg)
{
<<<<<<< HEAD
	unsigned int		i;

	i = va_arg(arg, unsigned int);
	info->s = ft_utoa(i);
	calculate_len(info);
	if (!info->is_minus_flag)
	{
		if (info->is_precision)
			fix_precision(info, 'u');
		if (info->is_width)
			handle_width(info, 'u');
		if (info->is_precision)
			handle_precision(info, 'u');
		print(info, 'u');
	}
	else
	{
		if (info->is_precision)
			fix_precision(info, 'u');
		if (info->is_precision)
			handle_precision(info, 'u');
		print(info, 'u');
		if (info->is_width)
			handle_width(info, 'u');
	}
}
=======
	// char				*s;
	// unsigned int		i;

	// i = va_arg(arg, unsigned int);
	// s = ft_utoa(i);
	// if (info->is_precision)
	// 	s = handle_precision(info, s, 'u');
	// if (info->width && !info->is_minus_flag)
	// 	handle_width(info, s, 'u');
	// ft_putstr(s);
	// if (info->width && info->is_minus_flag)
	// 	handle_width(info, s, 'u');
}
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
