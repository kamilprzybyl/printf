#include "../ft_printf.h"

void	ft_putstr(char *s, int n)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0' && i < n)
	{
		ret++;
		write(1, &s[i], 1);
		i++;
	}
}
