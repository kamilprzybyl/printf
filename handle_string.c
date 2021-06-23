#include "ft_printf.h"
// #include <stdio.h>
void	handle_string(t_info *info, va_list arg)
{
	char	*s;

	s = va_arg(arg, char *);
	if (info->precision)
		s = handle_precision(info, s, 's');
	if (info->width && !info->is_minus_flag)
		handle_width(info, s, 's');
	ft_putstr(s);
	if (info->width && info->is_minus_flag)
		handle_width(info, s, 's');
	free(s);
}