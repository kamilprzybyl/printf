#include "ft_printf.h"

void	handle_width(t_info *info, char spec)
{
	int	padding;

	if (!info->is_precision)
<<<<<<< HEAD
			padding = info->width_val - info->len;
=======
		padding = info->width_val - info->len;
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
	else
	{
		if (spec != 's' && info->is_precision && info->precision_val == 0 && strncmp("0", info->s, 1) == 0)//excpetion when precision and value is zero
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


