/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:43:05 by gguardam          #+#    #+#             */
/*   Updated: 2025/04/30 16:04:28 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *strdup(const char *s)
{
	if(s == NULL)
		return NULL;

	int i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	char *dst = malloc(i + 1);

	i = 0;
	while(s[i] != '\0')
        {
		dst[i] = s[i];
                i++;
        }

	return dst;
}

int	main()
{
	char charsy[] = "Hola mundo!";
	char *charsyDos;

	charsyDos = strdup(charsy);
	printf("%s\n", charsyDos);
	return 0;
}
