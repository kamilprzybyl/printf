#include "ft_printf.h"

static char	*reverse(char *str)
{
	char	temp;
	int		head;
	int		tail;

	head = 0;
	tail = ft_strlen(str) - 1;
	while (head < tail)
	{
		temp = str[head];
		str[head] = str[tail];
		str[tail] = temp;
		head++;
		tail--;
	}
	return (str);
}

static int	intlen(int n)
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
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	s = (char *)malloc(sizeof(char) * intlen(n) + 1);
	if (!s)
		return (NULL);
	if (n < 0)
		sign = -1;
	else if (n == 0)
		s[i++] = '0';
	while (n != 0)
	{
		s[i++] = (n % 10 * sign) + 48;
		n /= 10;
	}
	if (sign == -1)
		s[i++] = '-';
	s[i] = '\0';
	return (reverse(s));
}
