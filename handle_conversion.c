#include "ft_printf.h"

void	handle_conv(t_info *info, va_list arg, const char *format, int *i)
{
	while (check_flag(info, format[*i]) == 1)
		(*i)++;
	if (ft_isdigit(format[*i]) || format[*i] == '*')
		check_width(info, arg, format, i);
	if (format[*i] == '.')
	{
		check_prec(info, arg, format, i);
		if (info->is_prec)
			info->is_zero_flag = 0;
	}
	if (check_spec(info, arg, format[*i]) == 1)
		(*i)++;
	else if (format[*i] == '%')
	{
		ft_putchar('%');
		(*i)++;
	}
}
