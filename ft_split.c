#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 1;
	while(s[i] != '\0')
	{
		if(s[i] == c)
			words++;
		i++;
	}
	return words;
}

char **ft_split(const char *s, char c)
{
	if (!s)
		return NULL;
	int	words;
	char	**result;
	int	i;
	const char	*start;

	words = ft_count_words(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return NULL;
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		start = s;
		while (*s && *s != c)
			s++;
		//S queda posicionado en el delimitador y start al comienzo de la palabra, de esta manera sabemos que no estamos contando delimitadores consecutivos.
		if (s > start)
		{
			result[i] = malloc(s - start + 1);
			if (!result[i])
			{
				while (i > 0)
					free(result[--i]);
				free(result);
				return NULL;
			}
			strncpy(result[i], start, s - start);
			result[i][s - start] = '\0';
			i++;
		}
	}
	result[i] = NULL;
	return result;
}

int main() {
    char *str = "Hola Mundo Como Estas";
    char **split = ft_split(str, ' ');
    
    if (split) {
        for (int i = 0; split[i]; i++) {
            printf("split[%d] = \"%s\"\n", i, split[i]);
            free(split[i]);
        }
        free(split);
    }
    return 0;
}
