#include "ft_printf.h"

static void	handle_positive(t_info *info, int i)
{
	char	*s;

	s = ft_itoa(i);
	if (info->is_precision)
		s = handle_precision(info, s, 'd');
	if (info->width && !info->is_minus_flag)
		handle_width(info, s, 'd');
	ft_putstr(s);
	if (info->width && info->is_minus_flag)
		handle_width(info, s, 'd');
}

static void	handle_negative(t_info *info, int i)
{
	char	*s;

	s = ft_itoa(ft_abs(i));
	info->width_val -= 1;
	if (info->is_precision)
		s = handle_precision(info, s, 'd');
	if (!info->is_minus_flag)
	{
		if (info->width)
		{
			if (!info->is_precision && info->is_zero_flag)
				ft_putchar('-');
			handle_width(info, s, 'd');
			if (info->is_precision || !info->is_zero_flag)
				ft_putchar('-');
		}
		else
			ft_putchar('-');
		ft_putstr(s);
	}
	else if (info->is_minus_flag)
	{
		ft_putchar('-');
		ft_putstr(s);
		if (info->width && info->is_minus_flag)
			handle_width(info, s, 'u');
	}
}

void	handle_integer(t_info *info, va_list arg)
{
	int		i;

	i = va_arg(arg, int);
	if (i < 0)
		handle_negative(info, i);
	else
		handle_positive(info, i);
}

