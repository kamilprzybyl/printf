#include "../ft_printf.h"

// static int	llen(int n)
// {
// 	int	len;

// 	len = 0;
// 	if (n < 0)
// 	{
// 		len++;
// 		n *= -1;
// 	}
// 	else if (n == 0)
// 		len++;
// 	while (n > 0)
// 	{
// 		n /= 16;
// 		len++;
// 	}
// 	return (len);
// }

// char	*ft_dec_to_hex(unsigned long n, int is_uppercase)
// {
// 	int		i;
// 	char	*hex;
// 	char	*pattern;

// 	// pattern = "0123456789abcdef";
// 	pattern = ft_strdup("0123456789abcdef");
// 	hex = (char *)malloc(sizeof(char) * (llen(n) + 1));
// 	if (hex == NULL)
// 		return (NULL);
// 	i = 0;
// 	if (0 == n)
// 		hex[i++] = '0';
// 	else
// 	{
// 		while (n != 0)
// 		{
// 			if (is_uppercase)
// 				hex[i++] = ft_toupper(pattern[n % 16]);
// 			else
// 				hex[i++] = pattern[n % 16];
// 			n = n / 16;
// 		}
// 	}
// 	hex[i] = '\0';
// 	ft_strrev(hex);
// 	free(pattern);
// 	return (hex);
// }

char	*ft_dec_to_hex(unsigned long nbr, int big)
{
	char	*buf;
	int		i;

	buf = malloc(32);
	if (!buf)
		return (0);
	i = 0;
	if (nbr == 0)
		buf[i++] = '0';
	while (nbr)
	{
		if (nbr % 16 < 10)
			buf[i] = nbr % 16 + '0';
		else if (big)
			buf[i] = (nbr % 16) - 10 + 'A';
		else
			buf[i] = (nbr % 16) - 10 + 'a';
		i++;
		nbr /= 16;
	}
	buf[i] = 0;
	ft_strrev(buf);
	return (buf);
}