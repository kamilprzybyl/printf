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
		handle_width(info, s, 'd');
	ft_putchar(c);
	if (info->width && info->is_minus_flag)// if minus flag we want the output to be left-justified
		handle_width(info, s, 'd');
	free(s);
}

void	handle_u_char(t_info *info, va_list arg)
{
	unsigned char	u;
	char			*s;

	u = va_arg(arg, int);
	s = (char *)malloc(sizeof(char) + 1);
	s[0] = u;
	s[1] = '\0';
	if (info->width && !info->is_minus_flag)
		handle_width(info, s, 'd');
	ft_putchar(u);
	if (info->width && info->is_minus_flag)
		handle_width(info, s, 'd');
	free(s);
}