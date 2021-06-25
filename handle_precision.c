#include "ft_printf.h"

char	*handle_precision(t_info *info, char *s, char spec)
{
	char	*res;
	int		prec;

	if (spec == 's')
	{
		prec = (info->precision_val < ft_strlen(s)) ? info->precision_val : ft_strlen(s);
		res = (char *)malloc(sizeof(char) * (prec + 1));
		ft_strlcpy(res, s, prec + 1);
	}
	else
	{
		if (info->precision_val < 0)// this if/else statement is fucked up
			prec = (0 > (int)ft_strlen(s)) ? 0 - ft_strlen(s) : 0;
		else
			prec = (info->precision_val > ft_strlen(s)) ? info->precision_val - ft_strlen(s) : 0;
		res = (char *)malloc(sizeof(char) * (ft_strlen(s) + prec + 1));
		if (ft_memcmp(s, "0", ft_strlen(s)) == 0 && info->precision_val == 0)//exepction where prec and number is zero
			return res;
		ft_memset(res, '0', prec);
		ft_strlcat(res, s, prec + ft_strlen(s) + 1);
	}
	return (res);
}