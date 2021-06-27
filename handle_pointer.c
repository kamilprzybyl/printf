#include "ft_printf.h"

// static char	*add_prefix(char *hex)
// {
// 	char	*prefixed_hex;

// 	prefixed_hex = (char *)malloc(sizeof(char) * ft_strlen(hex) + 2 + 1);
// 	if (prefixed_hex == NULL)
// 		return (NULL);
// 	ft_strlcpy(prefixed_hex, "0x", 2 + 1);
// 	ft_strlcat(prefixed_hex, hex, ft_strlen(hex) + 2 + 1);
// 	return (prefixed_hex);
// }

void	handle_pointer(t_info *info, va_list arg)
{
	// char				*hex;
	// unsigned long long	i;

	// i = va_arg(arg, unsigned long long);//fetch data
	// if (i == 0 && info->is_precision)
	// 	hex = ft_strdup("");
	// else
	// 	hex = ft_dec_to_hex(i, 0);
	// hex = add_prefix(hex);
	// if (info->width && !info->is_minus_flag)
	// 	handle_width(info, hex, 'p');
	// ft_putstr(hex);
	// if (info->width && info->is_minus_flag)
	// 	handle_width(info, hex, 'p');
}