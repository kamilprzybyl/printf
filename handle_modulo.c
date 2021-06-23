#include "ft_printf.h"

void	handle_modulo(t_info *info, va_list arg)
{
	if (info->width && !info->is_minus_flag)// if minus flag we want the output to be right-justified
		handle_width(info, "1", '%');
	ft_putchar('%');
	if (info->width && info->is_minus_flag)// if minus flag we want the output to be left-justified
		handle_width(info, "1", '%');
}