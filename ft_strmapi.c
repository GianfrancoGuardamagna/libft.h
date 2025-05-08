#include <stdio.h>
#include <stdlib.h>

char	to_encode(unsigned int i, char c)
{
	(void)	i;

	if (c == 'a')
		return ('4');
	if (c == 't')
		return ('7');
	if (c == 'o')
		return ('0');
	else
		return (c);
}

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	int	i;
	char	*stringy;
	int	len;

	if (!s || !f)
		return NULL;
	len = 0;
	while (s[len])
		len++;
	stringy = malloc((len + 1) * sizeof(char));
	if (!stringy)
		return NULL;
	i = 0;
	while(s[i])
	{
		stringy[i] = f(i, s[i]);
		i++;
	}
	stringy[i] = '\0';
	return (stringy);
}

int	main()
{
	char	*str = "Aguante Boca!";
	char	*result = ft_strmapi(str, to_encode);

	printf("%s\n", str);
	printf("%s\n", result);
	return 0;
}
