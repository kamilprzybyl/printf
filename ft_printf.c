#include "ft_printf.h"

void	reset_info(t_info *info)
{
	info->width = 0;
	info->width_val = 0;
	info->is_precision = 0;
	info->precision_val = 0;
	info->zero_flag_val = 0;
	info->is_zero_flag = 0;
	info->is_minus_flag = 0;
}

static void	handle_conversion(t_info *info, va_list arg, const char *format, int *i)
{
	while (check_flag(info, format[*i]) == true)
		(*i)++;
	if (ft_isdigit(format[*i]) || format[*i] == '*')
		check_width(info, arg, format, i);
	if (format[*i] == '.')
		check_precision(info, arg, format, i);
	if (check_spec(info, arg, format[*i]) == true)
		(*i)++;
	else if (format[*i] == '%')
	{
		ft_putchar('%');
		(*i)++;
	}
}

int	ft_printf(const char *restrict format, ...)
{
	va_list	arg;
	t_info	info;
	int		i;

	len = 0;
	va_start(arg, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			reset_info(&info);
			i++;
			handle_conversion(&info, arg, format, &i);
		}
		else
		{
			ft_putchar(format[i]);
			i++;
		}
	}
	va_end(arg);
	return (len);
}