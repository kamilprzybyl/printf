#include "ft_printf.h"

void	handle_u_int(t_info *info, va_list arg)
{
	char				*s;
	unsigned int		i;

	i = va_arg(arg, unsigned int);
	s = ft_utoa(i);
	if (info->is_precision)
		s = handle_precision(info, s, 'u');
	if (info->width && !info->is_minus_flag)
		handle_width(info, s, 'u');
	ft_putstr(s);
	if (info->width && info->is_minus_flag)
		handle_width(info, s, 'u');
}
