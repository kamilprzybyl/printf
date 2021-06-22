#include "ft_printf.h"
#include <stdio.h>
void	handle_string(t_info *info, va_list arg)
{
	char	*s;

	s = va_arg(arg, char *);
	s = handle_precision(info, s, 's');
	handle_width(info, s, 's');
	ft_putstr(s);
}