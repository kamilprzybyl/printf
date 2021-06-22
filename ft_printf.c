#include "ft_printf.h"
#include <stdio.h>
void reset_info(t_info *info)
{
    info->width = 0;
    info->width_val = 0;
    info->precision = 0;
    info->precision_val = 0;
    info->zero_flag_val = 0;
	info->is_zero_flag = 0;
	info->is_minus_flag = 0;
}
t_call_fucntion	spec_table[] =
{
	{handle_integer, 'd'},
	{handle_integer, 'i'},
	{handle_u_char, 'u'},
	{handle_hex, 'x'},
	{handle_heX, 'X'},
	{handle_char, 'c'},
	{handle_string, 's'},
	{handle_pointer, 'p'},
	{(void *)0, '\0'}
};

int	check_flag(t_info *info, int flag)
{
	if (flag == '0')
	{
		info->is_zero_flag = 1;
		return (true);
	}
	else if (flag == '-')
	{
		info->is_minus_flag = 1;
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

void	check_prec(t_info *info, const char *format, int *i)
{
	(*i)++;
	info->precision_val = ft_atoi(&(format[*i]));
	while (ft_isdigit(format[*i]))
		(*i)++;
	info->precision = true;
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


int ft_printf(const char *restrict format, ...)
{
    va_list	arg;
    t_info	info;
    int		i;
    
    va_start(arg, format);
    i = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            reset_info(&info);
            i++;
            while (format[i])
            {
                if (check_flag(&info, format[i]) == true)
                    i++;
                if (ft_isdigit(format[i]))
                    check_width(&info, format, &i);	
                if (format[i] == '.')
                    check_prec(&info, format, &i);
                if (check_spec(&info, arg, format[i]) == true)
                {
                    i++;
                    break;
                }
                else if (format[i] == '%')
                {
                    ft_putchar('%');
                    i++;
                    break;
                }
                else
                {
                    ft_putchar('%');
                    ft_putchar(format[i]);
                    i++;
                    break;
                }
            } 
        }
        else
        {
            ft_putchar(format[i]);
            i++;
        }
    }
    va_end(arg);

    return (0);
}