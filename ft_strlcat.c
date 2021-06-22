#include "ft_printf.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(dst);
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (src[j] && i + j + 1 < dstsize)
	{
		((char *)dst)[i + j] = ((char *)src)[j];
		j++;
	}
	if (i + j < dstsize)
		((char *)dst)[i + j] = '\0';
	return (ft_strlen(src) + i);
}
