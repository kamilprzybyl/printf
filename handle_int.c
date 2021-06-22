#include "ft_printf.h"
#include <stdio.h>
void	handle_integer(t_info *info, va_list arg)
{
	char	*s;
	int		i;

	i = va_arg(arg, int);
	s = ft_itoa(i);
	if (info->precision)
		s = handle_precision(info, s, 'd');
	if (info->width)
		handle_width(info, s, 'd');
	ft_putstr(s);
}