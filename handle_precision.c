#include "ft_printf.h"

void	fix_prec(t_info *info, char spec)
{
	if (spec == 's')
	{
		if (info->prec < info->len)
			info->fixed_precision = info->prec;
		else
			info->fixed_precision = info->len;
	}
	else
	{
		if (info->prec > info->len)
			info->fixed_precision = info->prec;
		else
			info->fixed_precision = info->len;
	}
}

void	handle_prec(t_info *info, char spec)
{
	if (spec == 's')
		info->prec_to_apply = info->fixed_precision;
	else
	{
		if (info->fixed_precision > info->len)
			info->prec_to_apply = info->fixed_precision - info->len;
		else
			info->prec_to_apply = 0;
		while (info->prec_to_apply > 0)
		{
			ft_putchar('0');
			info->prec_to_apply--;
		}
	}
}
