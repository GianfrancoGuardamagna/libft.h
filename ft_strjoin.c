/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <gguardam@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:08:19 by gguardam          #+#    #+#             */
/*   Updated: 2025/05/06 15:39:30 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int	total_len;
	int	i;
	size_t	fst_len;
	char	*new_str;
	char	*dest;

	i = 0;
	dest
	fst_len = ft_strlen(s1);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc(total_len);
	while(s2[i] != '\0')
	{
		dest[fst_len + i] = s2[i];
		i++;
	}
	return s1;
}

int	main()
{
	char	charsy[12] = "Hola ";
	char	charsyDos[] = "Mundo!";
	ft_strjoin(charsy, charsyDos);
	printf("%s\n", charsy);
	return 0;
}
