/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:05:20 by gguardam          #+#    #+#             */
/*   Updated: 2025/04/21 15:41:46 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char ch;

	ch = (char) c;
	while(*s != '\0')
	{
		if(*s == ch)
			return (char *)s;
		s++;
	}
	if(ch == '\0')
		return ((char *)s);
	return NULL;
}
