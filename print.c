#include "ft_printf.h"

void	print(t_info *info, char spec)
{
	if (spec == 's')
	{
		if (info->is_prec)
			ft_putstr(info->s, info->prec_to_apply);
		else
			ft_putstr(info->s, info->len);
	}
	else
	{
		if (info->is_prec && info->prec == 0 && !ft_strncmp("0", info->s, 1))
			return ;
		else
			ft_putstr(info->s, info->len);
	}
}
