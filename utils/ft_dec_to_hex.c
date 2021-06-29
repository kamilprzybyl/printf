#include "../ft_printf.h"

static int	llen(int n)
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

char	*ft_dec_to_hex(unsigned long n, int is_uppercase)
{
	int		i;
	char	*hex;
	char	*pattern;

	pattern = "0123456789abcdef";
	hex = (char *)malloc(sizeof(char) * (llen(n) + 1));
	if (hex == NULL)
		return (NULL);
	i = 0;
	if (0 == n)
		hex[i++] = '0';
	else
	{
		while (n != 0)
		{
			if (is_uppercase)
				hex[i++] = ft_toupper(pattern[n % 16]);
			else
				hex[i++] = pattern[n % 16];
			n = n / 16;
		}
	}
	hex[i] = '\0';
	ft_strrev(hex);
	return (hex);
}
