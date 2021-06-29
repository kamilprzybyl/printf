#include "ft_printf.h"

t_call_fucntion	g_spec_table[] =
{
	{handle_integer, 'd'},
	{handle_integer, 'i'},
	{handle_u_int, 'u'},
	{handle_hex, 'x'},
	{handle_heX, 'X'},
	{handle_char, 'c'},
	{handle_string, 's'},
	{handle_pointer, 'p'},
	{handle_modulo, '%'},
	{(void *)0, '\0'}
};

int	check_flag(t_info *info, int flag)
{
	if (flag == '-')
	{
		if (info->is_zero_flag)
			info->is_zero_flag = 0;
		info->is_minus_flag = 1;
		return (1);
	}
	else if (flag == '0')
	{
		if (!info->is_minus_flag)
			info->is_zero_flag = 1;
		return (1);
	}
	return (0);
}

void	check_width(t_info *info, va_list arg, const char *format, int *i)
{
	if (format[*i] == '*')
	{
		info->width_val = va_arg(arg, int);
		if (info->width_val < 0)
		{
			info->width_val = ft_abs(info->width_val);
			info->is_minus_flag = 1;
			if (info->is_zero_flag)
				info->is_zero_flag = 0;
		}
		(*i)++;
	}
	else
	{
		info->width_val = ft_atoi(&(format[*i]));
		while (ft_isdigit(format[*i]))
			(*i)++;
	}
	info->is_width = 1;
}

void	check_prec(t_info *info, va_list arg, const char *format, int *i)
{
	(*i)++;
	if (format[*i] == '*')
	{
		info->prec = va_arg(arg, int);
		(*i)++;
		if (info->prec < 0)
			info->is_prec = 0;
		else
			info->is_prec = 1;
	}
	else
	{
		info->prec = ft_atoi(&(format[*i]));
		while (ft_isdigit(format[*i]))
			(*i)++;
		info->is_prec = 1;
	}
}

int	check_spec(t_info *info, va_list arg, char spec)
{
	int	i;

	i = 0;
	while (g_spec_table[i].fct)
	{
		if (g_spec_table[i].spec == spec)
		{
			g_spec_table[i].fct(info, arg);
			return (1);
		}
		i++;
	}
	return (0);
}
