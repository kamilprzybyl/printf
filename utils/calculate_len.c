#include "../ft_printf.h"

void	calculate_len(t_info *info)
{
	if (info->s)
		info->len = ft_strlen(info->s);
	else if (info->c)
		info->len = 1;
}
