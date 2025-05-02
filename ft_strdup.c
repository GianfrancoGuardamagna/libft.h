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

#include <stddef.h>
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	int	i;
	char *dst;

	i = 0;
	while (s[i] != '\0')
		i++;
	dst = (char *)malloc(i + 1);
	if(dst == NULL)
		return NULL;
	i = 0;
	while (s[i] != '\0')
        {
		dst[i] = s[i];
                i++;
        }
	dst[i] = '\0';
	return (dst);
}
