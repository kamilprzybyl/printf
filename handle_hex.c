#include "ft_printf.h"

void	handle_hex(t_info *info, va_list arg)
{
	int		i;
	char	*hex;

	i = va_arg(arg, int);
	hex = ft_dec_to_hex(i, 0);
<<<<<<< HEAD
	if (info->is_preceision)
=======
	if (info->precision)
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476
		hex = handle_precision(info, hex, 'x');
	if (info->width && !info->is_minus_flag)
		handle_width(info, hex, 'x');
	ft_putstr(hex);
	if (info->width && info->is_minus_flag)
		handle_width(info, hex, 'x');
<<<<<<< HEAD
=======
	free(hex);
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476
}


void	handle_heX(t_info *info, va_list arg)
{
	int		i;
	char	*hex;

	i = va_arg(arg, int);
	hex = ft_dec_to_hex(i, 1);
<<<<<<< HEAD
	if (info->is_preceision)
=======
	if (info->precision)
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476
		hex = handle_precision(info, hex, 'X');
	if (info->width && !info->is_minus_flag)
		handle_width(info, hex, 'X');
	ft_putstr(hex);
	if (info->width && info->is_minus_flag)
		handle_width(info, hex, 'X');
<<<<<<< HEAD
=======
	free(hex);
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476
}
