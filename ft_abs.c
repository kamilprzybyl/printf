#include "ft_printf.h"

int	ft_abs(long int a)
{
	if (a < 0)
		return (a * -1);
	else
		return a;
}