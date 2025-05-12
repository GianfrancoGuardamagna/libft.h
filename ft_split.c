#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			words++;
		i++;
	}
	return (words);
}

static void	free_result(char **result, int i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
}

static char	*allocating(char **res, const char *start, const char *end, int i)
{
	res[i] = malloc(end - start + 1);
	if (!res[i])
	{
		free_result(res, i);
		return (NULL);
	}
	ft_strlcpy(res[i], start, start - end);
	res[i][end - start] = '\0';
	return (res[i]);
}

static char	**process_string(const char *s, char c, char **result)
{
	int			i;
	const char	*start;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		start = s;
		while (*s && *s != c)
			s++;
		if (s > start)
		{
			if (!allocating(result, start, s, i))
				return (NULL);
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	int			words;
	char		**result;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (process_string(s, c, result));
}
