#include "../ft_printf.h"

static int	lllen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	else if (n == 0)
		len++;
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

char	*ft_dec_to_hex(unsigned long long n, int is_uppercase)
{
	int		i;
	int		rem;
	char	*hex;
	char	*pattern;

	pattern = "0123456789abcdef";
	hex = (char *)malloc(sizeof(char) * (lllen(n) + 1));
	if (hex == NULL)
		return NULL;
	i = 0;
	if (0 == n)
		hex[i++] = '0';
	else
	{
		while (n != 0)
		{
			rem = n % 16;
			if (is_uppercase)
				hex[i++] = ft_toupper(pattern[rem]);
			else 
				hex[i++] = pattern[rem];
			n = n / 16;
		}
	}
	hex[i] = '\0';
	ft_strrev(hex);
	return (hex);
}