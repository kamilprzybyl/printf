#include "ft_printf.h"

void	handle_width(t_info *info, char *s, char spec)
{
	int		padding;

	if (spec == 'c')
		padding = info->width_val - 1;
	else
		padding = info->width_val - ft_strlen(s);
	while (padding > 0){
		if (info->is_zero_flag && (!info->is_precision || info->precision_val == 0))
			ft_putchar('0');
		else
			ft_putchar(' ');
		padding--;
	}
}
