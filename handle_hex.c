#include "ft_printf.h"

// void	handle_hex(t_info *info, va_list arg)
// {
// 	long long int	i;
// 	char			*hex;
	
// 	i = va_arg(arg, long long int);
// 	hex = ft_dec_to_hex(i, 0);
// 	if (info->is_precision)
// 		hex = handle_precision(info, hex, 'x');
// 	if (info->width && !info->is_minus_flag)
// 		handle_width(info, hex, 'x');
// 	ft_putstr(hex);
// 	if (info->width && info->is_minus_flag)
// 		handle_width(info, hex, 'x');
// 	// free(hex);
// }


// void	handle_heX(t_info *info, va_list arg)
// {
// 	long long int	i;
// 	char			*hex;

// 	i = va_arg(arg, long long int);
// 	hex = ft_dec_to_hex(i, 1);
// 	if (info->is_precision)
// 		hex = handle_precision(info, hex, 'X');
// 	if (info->width && !info->is_minus_flag)
// 		handle_width(info, hex, 'X');
// 	ft_putstr(hex);
// 	if (info->width && info->is_minus_flag)
// 		handle_width(info, hex, 'X');
// 	// free(hex);
// }

void	handle_hex(t_info *info, va_list arg)
{
<<<<<<< HEAD
	long long	i;

	i = va_arg(arg, unsigned int);
=======
	long long int	i;

	i = va_arg(arg, long long int);
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
	info->s = ft_dec_to_hex(i, 0);
	calculate_len(info);
	if (!info->is_minus_flag)
	{
		if (info->is_precision)
			fix_precision(info, 'x');
<<<<<<< HEAD
		if (info->is_width)
=======
		if (info->width)
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
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
<<<<<<< HEAD
		if (info->is_width)
=======
		if (info->width)
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
			handle_width(info, 'x');
	}
}


void	handle_heX(t_info *info, va_list arg)
{
<<<<<<< HEAD
	long long	i;

	i = va_arg(arg, unsigned int);
=======
	long long int	i;

	i = va_arg(arg, long long int);
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
	info->s = ft_dec_to_hex(i, 1);
	calculate_len(info);
	if (!info->is_minus_flag)
	{
		if (info->is_precision)
			fix_precision(info, 'X');
<<<<<<< HEAD
		if (info->is_width)
=======
		if (info->width)
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
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
<<<<<<< HEAD
		if (info->is_width)
=======
		if (info->width)
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
			handle_width(info, 'X');
	}
}
