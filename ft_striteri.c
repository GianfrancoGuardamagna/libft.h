#include <stdio.h>
#include <stdlib.h>

void	to_encode(unsigned int i, char *c)
{
	(void)	i;
	if (*c == 'a')
		*c = '4';
	else if (*c == 't')
		*c ='7';
	else if (*c == 'o')
		*c = '0';
}

void ft_striteri(char *s, void (*f)(unsigned
int, char*))
{
	unsigned int	i;

	if(!s || !f)
		return;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

int	main()
{
	char	str[] = "Aguante Boca!";
	ft_striteri(str, to_encode);

	printf("%s\n", str);
	return 0;
}
