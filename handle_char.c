#include "ft_printf.h"

void	handle_char(t_info *info, va_list arg)
{
	char	c;
	char	*s;

	c = va_arg(arg, int);
	s = (char *)malloc(sizeof(char) + 1);
	s[0] = c;
	s[1] = '\0';
	if (info->width && !info->is_minus_flag)// if minus flag we want the output to be right-justified
		handle_width(info, s, 'c');
	ft_putchar(c);
	if (info->width && info->is_minus_flag)// if minus flag we want the output to be left-justified
		handle_width(info, s, 'c');
}