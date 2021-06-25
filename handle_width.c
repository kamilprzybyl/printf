#include "ft_printf.h"

void	handle_width(t_info *info, char *s, char spec)
{
	int		padding;
	char	zero_padding;
	char	blank_padding;

	zero_padding = '0';
	blank_padding = ' ';
	if (spec == 'c')
		padding = info->width_val - 1;
	else
		padding = info->width_val - ft_strlen(s);
	while (padding > 0){
		if ((spec == 'd' || spec == 'i' || spec == 'u' || spec == 'x' || spec == 'X' || spec == '%') && info->is_zero_flag && !info->is_precision && !info->is_minus_flag)// don't do anything if there is precision
			ft_putchar(zero_padding);
		else
			ft_putchar(blank_padding);
		padding--;
	}
}
