#include "../ft_printf.h"

// static char	*reverse(char *str)
// {
// 	char	temp;
// 	int		head;
// 	int		tail;

// 	head = 0;
// 	tail = ft_strlen(str) - 1;
// 	while (head < tail)
// 	{
// 		temp = str[head];
// 		str[head] = str[tail];
// 		str[tail] = temp;
// 		head++;
// 		tail--;
// 	}
// 	return (str);
// }

// static int	intlen(int n)
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
// 		n /= 10;
// 		len++;
// 	}
// 	return (len);
// }

// char	*ft_utoa(unsigned int n)
// {
// 	char	*s;
// 	int		i;
// 	int		sign;

// 	i = 0;
// 	sign = 1;
// 	s = (char *)malloc(sizeof(char) * intlen(n) + 1);
// 	if (!s)
// 		return (NULL);
// 	if (n < 0)
// 		sign = -1;
// 	else if (n == 0)
// 		s[i++] = '0';
// 	while (n != 0)
// 	{
// 		s[i++] = (n % 10 * sign) + 48;
// 		n /= 10;
// 	}
// 	if (sign == -1)
// 		s[i++] = '-';
// 	s[i] = '\0';
// 	return (reverse(s));
// }
static int		ft_estim(long n)
{
	size_t	estim;
	int		isneg;

	estim = 0;
	isneg = 0;
	if (n < 0)
	{
		estim++;
		isneg++;
		n = -n;
	}
	while (n >= 1)
	{
		estim++;
		n /= 10;
	}
	return (estim);
}

static char		*ft_gen(char *rtn, long nbr, int len, int isneg)
{
	if (nbr != 0)
		rtn = malloc(sizeof(char) * (len + 1));
	else
		return (rtn = ft_strdup("0"));
	if (!rtn)
		return (0);
	isneg = 0;
	if (nbr < 0)
	{
		isneg++;
		nbr = -nbr;
	}
	rtn[len] = '\0';
	while (--len)
	{
		rtn[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (isneg == 1)
		rtn[0] = '-';
	else
		rtn[0] = (nbr % 10) + '0';
	return (rtn);
}

char			*ft_utoa(unsigned int n)
{
	int		len;
	char	*rtn;
	long	nbr;
	int		isneg;

	nbr = n;
	len = ft_estim(nbr);
	rtn = 0;
	isneg = 0;
	if (!(rtn = ft_gen(rtn, nbr, len, isneg)))
		return (0);
	return (rtn);
}