#include "ft_printf.h"

void	ft_strrev(char *s)
{
	int		head;
	int		tail;
	char	temp;

	head = 0;
	tail = ft_strlen(s) - 1;
	while (head < tail)
	{
		temp = s[head];
		s[head] = s[tail];
		s[tail] = temp;
		head++;
		tail--;
	}
}
