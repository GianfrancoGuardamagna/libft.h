/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <gguardam@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:41:13 by gguardam          #+#    #+#             */
/*   Updated: 2025/05/06 15:07:38 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr (const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = malloc(len);
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

int	main()
{
	char charsy[] = "Hola mundo!";
	char *charsyDos = ft_substr(charsy, 5, 5);
	printf("%s", charsyDos);
	free(charsyDos);
	return 0;
}
