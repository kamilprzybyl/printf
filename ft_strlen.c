#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	unsigned long	i;

	i = 0;
	while (((char *)s)[i] != '\0')
	{
		i++;
	}
	return (i);
}
