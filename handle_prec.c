#include "ft_printf.h"
// #include <stdio.h>
char	*handle_precision(t_info *info, char *s, char spec)
{
	char	*res;
	int		prec;
	int		i;

	if (spec == 's')
	{
		prec = (info->precision_val < ft_strlen(s)) ? info->precision_val : ft_strlen(s);
		res = (char *)malloc(sizeof(char) * (prec + 1));
		ft_strlcpy(res, s, prec + 1);
	}
	else
	{
		prec = (info->precision_val > ft_strlen(s)) ? info->precision_val - ft_strlen(s) : 0;
		res = (char *)malloc(sizeof(char) * (prec + 1));
		if (ft_memcmp(s, "0", ft_strlen(s)) == 0 && prec == 0)//exepction where prec and number is zero
			return res;
		i = 0;
		while (prec > 0)
		{
			res[i] = '0';
			i++;
			prec--;
		}
		ft_strlcat(res, s, ft_strlen(res) + ft_strlen(s) + 1);
	}
	return (res);
}