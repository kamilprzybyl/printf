#include "ft_printf.h"

void	handle_hex(t_info *info, va_list arg)
{
	long long int	i;
	char			*hex;
	i = va_arg(arg, long long int);
	hex = ft_dec_to_hex(i, 0);
	if (info->is_precision)
		hex = handle_precision(info, hex, 'x');
	if (info->width && !info->is_minus_flag)
		handle_width(info, hex, 'x');
	ft_putstr(hex);
	if (info->width && info->is_minus_flag)
		handle_width(info, hex, 'x');
}


void	handle_heX(t_info *info, va_list arg)
{
	long long int	i;
	char			*hex;

	i = va_arg(arg, long long int);
	hex = ft_dec_to_hex(i, 1);
	if (info->is_precision)
		hex = handle_precision(info, hex, 'X');
	if (info->width && !info->is_minus_flag)
		handle_width(info, hex, 'X');
	ft_putstr(hex);
	if (info->width && info->is_minus_flag)
		handle_width(info, hex, 'X');
}
