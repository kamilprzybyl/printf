#include "ft_printf.h"

void	handle_width(t_info *info, char spec)
{
	int	padding;

	if (!info->is_prec)
		padding = info->width_val - info->len;
	else
	{
		if (spec != 's' && info->is_prec && !info->prec
			&& !ft_strncmp("0", info->s, 1))
			padding = info->width_val;
		else
			padding = info->width_val - info->fixed_precision;
	}
	while (padding > 0)
	{
		if (!info->is_zero_flag)
			ft_putchar(' ');
		else
			ft_putchar('0');
		padding--;
	}
}
