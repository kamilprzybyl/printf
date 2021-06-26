#include "ft_printf.h"

void	handle_string(t_info *info, va_list arg)
{
	char	*s;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = ft_strdup("(null)");
	// printf("s = %s\n", s);
	if (info->is_precision)
		s = handle_precision(info, s, 's');
	// printf("s = %s\n", s);
	if (info->width && !info->is_minus_flag)
		handle_width(info, s, 's');
	ft_putstr(s);
	if (info->width && info->is_minus_flag)
		handle_width(info, s, 's');
}
