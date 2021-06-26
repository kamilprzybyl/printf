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
		if (info->is_zero_flag)
			info->is_zero_flag = 0;
		info->is_minus_flag = 1;
		return (true);
	}
	else if (flag == '0')
	{
		if (!info->is_minus_flag)
			info->is_zero_flag = 1;
		return (true);
	}
	return (false);
}

void	check_width(t_info *info, va_list arg, const char *format, int *i)
{
	if (format[*i] == '*')
	{
		info->width_val = va_arg(arg, int);
		if (info->width_val < 0)// if the value is negative treat it like minus flag and postive value
		{
			info->width_val = ft_abs(info->width_val);
			info->is_minus_flag = 1;
		}
		(*i)++;
	}
	else
	{
		info->width_val = ft_atoi(&(format[*i]));
		while (ft_isdigit(format[*i])) 
			(*i)++;
	}
	info->width = true;
}

void	check_precision(t_info *info, va_list arg, const char *format, int *i)
{
	(*i)++;//skip the dot
	if (format[*i] == '*')
	{
		info->precision_val = va_arg(arg, int);
		(*i)++;
		if (info->precision_val < 0)//ignore precision when it's less than zero
			info->is_precision = false;
		else
			info->is_precision = true;
	}
	else
	{
		info->precision_val = ft_atoi(&(format[*i]));
		while (ft_isdigit(format[*i]))
			(*i)++;
		info->is_precision = true;
	}
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
