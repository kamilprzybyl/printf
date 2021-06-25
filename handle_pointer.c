#include "ft_printf.h"
#include <stdio.h>
static char	*add_prefix(char *hex)
{
	char	*prefixed_hex;

	prefixed_hex = (char *)malloc(sizeof(char) * ft_strlen(hex) + 2 + 1);
	if (prefixed_hex == NULL)
		return (NULL);
	ft_strlcpy(prefixed_hex, "0x", 2 + 1);
	ft_strlcat(prefixed_hex, hex, ft_strlen(hex) + 2 + 1);
	return (prefixed_hex);
}

void	handle_pointer(t_info *info, va_list arg)
{
	char				*address;
	unsigned long long	i;

<<<<<<< HEAD
	i = va_arg(arg, unsigned long long);//fetch data
	address = ft_dec_to_hex(i, 0);
	address = add_prefix(address);
	if (info->width && !info->is_minus_flag)
		handle_width(info, address, 'x');
	ft_putstr(address);
	if (info->width && info->is_minus_flag)
		handle_width(info, address, 'x');
=======
	i = va_arg(arg, int);//fetch data
	hex = ft_dec_to_hex(i, 0);
	if (info->width && !info->is_minus_flag)
		handle_width(info, hex, 'x');
	ft_putstr("0x");
	ft_putstr(hex);
	if (info->width && info->is_minus_flag)
		handle_width(info, hex, 'x');
	free(hex);
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476
}
