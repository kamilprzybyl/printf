#include "ft_printf.h"


void	calculate_len(t_info *info)
{
	if (info->s)
		info->len = ft_strlen(info->s);
	else if (info->c)
		info->len = 1;
}

void	fix_precision(t_info *info, char spec)
{
	if (spec == 's')
		info->fixed_precision = (info->precision_val < info->len) ? info->precision_val : info->len;
	else
		info->fixed_precision = (info->precision_val > info->len) ? info->precision_val : info->len;
}

void	handle_precision(t_info *info, char spec)
{
	if (spec == 's')
		info->prec = info->fixed_precision;
	else
	{
		info->prec = (info->fixed_precision > info->len) ? info->fixed_precision - info->len : 0;
		while (info->prec > 0)
		{
			ft_putchar('0');
			info->prec--;
		}
	}
}

void	print(t_info *info, char spec)
{
	if (spec == 's')
	{
		if (info->is_precision)
			ft_putstr(info->s, info->prec);
		else
			ft_putstr(info->s, info->len);
	}
	else
	{
		if (info->is_precision && info->precision_val == 0 && strncmp("0", info->s, 1) == 0)//excpetion when precision and value is zero
			return ;
		else
			ft_putstr(info->s, info->len);
	}
}
