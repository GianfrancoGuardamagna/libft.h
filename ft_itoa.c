#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

char	*ft_itoa(int num)
{
	char	buffer[12]; //Suficiente para INT_MIN
	int	sign;
	int	i;
	long	n;
	char	*result;
	int	j;	

	sign = 1;
	i = 0;
	n = num;

	if (n == 0)
		return strdup("0");
	if (n < 0)
	{
		sign = -1;
		n = -n; //Lo paso a positivo
	}
	while (n > 0)
	{
		buffer[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	if (sign == -1)
		buffer[i++] = '-';
	buffer[i] = '\0';
	j = 0;
	result = malloc(i + 1);
	if(!result)
		return NULL;
	while (i > 0)
		result[j++] = buffer[--i];
	result[j] = '\0';
	return result;
}


int	main()
{
	int	numby = 41298;
	char	*charsy = ft_itoa(numby);
	printf("%s\n", charsy);
	free(charsy);
	return 0;
}
