#include "ft_printf.h"
// #include <stdio.h> 
void	handle_width(t_info *info, char *s, char spec)
{
	int	chars_to_be_padded;

	chars_to_be_padded = info->width_val - ft_strlen(s);
	while (chars_to_be_padded > 0){
		if ((spec == 'd' || spec == 'i' || spec == 'u') && info->is_zero_flag && !info->precision)
			ft_putchar('0');
		else
			ft_putchar(' ');
		chars_to_be_padded--;
	}
}