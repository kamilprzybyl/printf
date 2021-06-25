#include "ft_printf.h"

static char	*add_minus(char *s)
{
	char	*negative_s;

	negative_s = (char *)malloc(sizeof(char) * ft_strlen(s) + 2 + 1);
	if (negative_s == NULL)
		return (NULL);
	ft_strlcpy(negative_s, "-", 2 + 1);
	ft_strlcat(negative_s, s, ft_strlen(s) + 2 + 1);
	return (negative_s);
}

void	handle_integer(t_info *info, va_list arg)
{
	char	*s;
	int		i;

	i = va_arg(arg, int);
	if (i < 0)
	{
		s = ft_itoa(ft_abs(i));
		printf("s = %s\n", s);
		if (info->is_precision)
			s = handle_precision(info, s, 'd');
		s = add_minus(s);
	}
	else
	{
		s = ft_itoa(i);
		if (info->is_precision)
			s = handle_precision(info, s, 'd');
	}
	if (info->width && !info->is_minus_flag)
		handle_width(info, s, 'd');
	ft_putstr(s);
	if (info->width && info->is_minus_flag)
		handle_width(info, s, 'd');
}

void	handle_u_int(t_info *info, va_list arg)
{
	char				*s;
	unsigned int		i;

	i = va_arg(arg, unsigned int);
	s = ft_utoa(i);
	if (info->is_precision)
		s = handle_precision(info, s, 'u');
	if (info->width && !info->is_minus_flag)
		handle_width(info, s, 'u');
	ft_putstr(s);
	if (info->width && info->is_minus_flag)
		handle_width(info, s, 'u');
}