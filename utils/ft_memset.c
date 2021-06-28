#include "../ft_printf.h"

void	*ft_memset(void *b, int c, unsigned long len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
