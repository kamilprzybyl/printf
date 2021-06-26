#include "ft_printf.h"

void	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		len++;
		write(1, &s[i], 1);
		i++;
	}
}
