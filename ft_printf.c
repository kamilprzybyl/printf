#include "ft_printf.h"

void	reset_info(t_info *info)
{
	info->is_width = 0;
	info->width_val = 0;
	info->is_prec = 0;
	info->prec = 0;
	info->zero_flag_val = 0;
	info->is_zero_flag = 0;
	info->is_minus_flag = 0;
	info->fixed_precision = 0;
	info->prec_to_apply = 0;
	info->len = 0;
	info->s = NULL;
	if (info->s)
		free(info->s);
}

int	ft_printf(const char *restrict format, ...)
{
	va_list	arg;
	t_info	info;
	int		i;

	g_ret = 0;
	va_start(arg, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			reset_info(&info);
			i++;
			handle_conv(&info, arg, format, &i);
		}
		else
		{
			ft_putchar(format[i]);
			i++;
		}
	}
	reset_info(&info);
	va_end(arg);
	return (g_ret);
}
