#include "ft_printf.h"

t_call_fucntion	spec_table[] =
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
		info->is_minus_flag = 1;
		return (true);
	}
	else if (flag == '0')
	{
		info->is_zero_flag = 1;
		return (true);
	}
	return (false);
}

void	check_width(t_info *info, const char *format, int *i)
{
	info->width_val = ft_atoi(&(format[*i]));
	while (ft_isdigit(format[*i])) 
		(*i)++;
	info->width = true;
}

void	check_precision(t_info *info, va_list arg, const char *format, int *i)
{
	(*i)++;//skip the dot
	if (format[*i] == '*')
	{
		info->precision_val = va_arg(arg, int);
		(*i)++;
	}
	else
	{
		info->precision_val = ft_atoi(&(format[*i]));
		while (ft_isdigit(format[*i]))
			(*i)++;
	}
	info->is_preceision = true;
}

int	check_spec(t_info *info, va_list arg, char spec)
{
	int i;

	i = 0;
	while (spec_table[i].fct)
	{
		if (spec_table[i].spec == spec)
		{
			spec_table[i].fct(info, arg);
			return (true);
		}
		i++;
	}
	return (false);
}
