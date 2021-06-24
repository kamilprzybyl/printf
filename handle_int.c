#include "ft_printf.h"
// #include <stdio.h>
void	handle_integer(t_info *info, va_list arg)
{
	char	*s;
	int		i;

	i = va_arg(arg, int);
	s = ft_itoa(i);
	if (info->is_preceision)
		s = handle_precision(info, s, 'd');
	if (info->width && !info->is_minus_flag)
		handle_width(info, s, 'd');
	ft_putstr(s);
	if (info->width && info->is_minus_flag)
		handle_width(info, s, 'd');
}

void	handle_u_int(t_info *info, va_list arg)
{
	char				*s;
	unsigned int		i;

	i = va_arg(arg, unsigned int);
	s = ft_utoa(i);
	if (info->is_preceision)
		s = handle_precision(info, s, 'u');
	if (info->width && !info->is_minus_flag)
		handle_width(info, s, 'u');
	ft_putstr(s);
	if (info->width && info->is_minus_flag)
		handle_width(info, s, 'u');
}