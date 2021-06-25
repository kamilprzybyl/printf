#include "ft_printf.h"
#include <stdio.h> 
<<<<<<< HEAD
#include <string.h>
=======
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476
void	handle_width(t_info *info, char *s, char spec)
{
	int		padding;
	char	zero_padding;
	char	blank_padding;

	zero_padding = '0';
	blank_padding = ' ';
	padding = info->width_val - ft_strlen(s);
<<<<<<< HEAD
	if (s[0] == '\0')// this exception looks like shit - fix it
		padding = info->width_val - 1;
	while (padding > 0){
		if ((spec == 'd' || spec == 'i' || spec == 'u' || spec == 'x' || spec == 'X' || spec == '%') && info->is_zero_flag && !info->is_preceision)// don't do anything if there is precision
=======
	while (padding > 0){
		if ((spec == 'd' || spec == 'i' || spec == 'u' || spec == 'x' || spec == 'X') && info->is_zero_flag && !info->precision)// don't do anything if there is precision
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476
			ft_putchar(zero_padding);
		else
			ft_putchar(blank_padding);
		padding--;
	}
}
