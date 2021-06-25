#include "ft_printf.h"
// #include <stdio.h>
<<<<<<< HEAD
void	reset_info(t_info *info)
=======
void reset_info(t_info *info)
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476
{
	info->width = 0;
	info->width_val = 0;
	info->is_preceision = 0;
	info->precision_val = 0;
	info->zero_flag_val = 0;
	info->is_zero_flag = 0;
	info->is_minus_flag = 0;
}

static void	handle_conversion(t_info *info, va_list arg, const char *format, int *i)
{
	if (check_flag(info, format[*i]) == true)
		(*i)++;
	if (ft_isdigit(format[*i]))
		check_width(info, format, i);
	if (format[*i] == '.')
<<<<<<< HEAD
		check_precision(info, arg, format, i);
=======
		check_prec(info, format, i);
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476
	if (check_spec(info, arg, format[*i]) == true)
		(*i)++;
	else if (format[*i] == '%')
	{
		ft_putchar('%');
		(*i)++;
	}
}

<<<<<<< HEAD
int	ft_printf(const char *restrict format, ...)
=======
int ft_printf(const char *restrict format, ...)
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476
{
	va_list	arg;
	t_info	info;
	int		i;

	va_start(arg, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
<<<<<<< HEAD
		{
			reset_info(&info);
			i++;
			handle_conversion(&info, arg, format, &i);
		}
		else
		{
=======
		{
			reset_info(&info);
			i++;
			handle_conversion(&info, arg, format, &i);
		}
		else
		{
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476
			ft_putchar(format[i]);
			i++;
		}
	}
	va_end(arg);
	return (0);
}