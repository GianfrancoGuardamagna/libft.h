#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	start;
	int	end;
	char		*trimmed;
	int	i;
	if (!s1 || !set)
		return NULL;
	start = 0;
	end = strlen(s1) - 1;
	i = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end >= start && is_in_set(s1[end], set))
		end--;
	len = end - start + 1;
	trimmed = malloc(len + 1);
	if (!trimmed)
		return NULL;
	while (start <= end)
		trimmed[i++] = s1[start++];
	trimmed[i] = '\0';
	return (trimmed);
}

int	main()
{
	char *charsy = "oooHolo Borgoooo";
	char *charlston = "o";
	char *result = ft_strtrim(charsy, charlston);
	printf("%s\n", result);
	free(result);
	return 0;
}
