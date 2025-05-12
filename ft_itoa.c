#include "libft.h"

static	int	first_process(long	*num)
{
	if (*num < 0)
	{
		*num = -*num;
		return (-1);
	}
	else
		return (1);
}

static	void	fill_buffer(char *buffer, long n, int *i)
{
	while (n > 0)
	{
		buffer[*i] = (n % 10) + '0';
		n /= 10;
		(*i)++;
	}
}

static char	*invert_buffer(char *buffer, int len)
{
	char	*result;
	int		i;
	int		j;

	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	j = len - 1;
	while (j >= 0 && buffer[j] != '-')
		result[i++] = buffer[j--];
	result[i] = '\0';
	return (result);
}

char	*ft_itoa(int num)
{
	char	buffer[12];
	int		sign;
	int		i;
	long	n;

	i = 0;
	n = num;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	sign = first_process(&n);
	fill_buffer(buffer, n, &i);
	if (sign == -1)
		buffer[i++] = '-';
	buffer[i] = '\0';
	return (invert_buffer(buffer, i));
}
