#include "ft_printf.h"

// void	handle_char(t_info *info, va_list arg)
// {
// 	char	c;
// 	char	*s;

// 	c = va_arg(arg, int);
// 	s = (char *)malloc(sizeof(char) * 2);
// 	if (!s)
// 		return ;
// 	s[0] = c;
// 	s[1] = '\0';
// 	if (info->width && !info->is_minus_flag)// if minus flag we want the output to be right-justified
// 		handle_width(info, s, 'c');
// 	ft_putchar(c);
// 	if (info->width && info->is_minus_flag)// if minus flag we want the output to be left-justified
// 		handle_width(info, s, 'c');
// 	// free(s);
// }

void	handle_char(t_info *info, va_list arg)
{
	info->c = va_arg(arg, int);
	info->len = 1;
	if (!info->is_minus_flag)
	{
<<<<<<< HEAD
		if (info->is_width)
=======
		if (info->width)
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
			handle_width(info, 'c');
		ft_putchar(info->c);
	}
	else
	{
		ft_putchar(info->c);
<<<<<<< HEAD
		if (info->is_width)
=======
		if (info->width)
>>>>>>> ac09cbc46955801ea0bd9529b91b51bbdb716e03
			handle_width(info, 'c');
	}
}