/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <gguardam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:15:35 by gguardam          #+#    #+#             */
/*   Updated: 2025/04/30 18:01:59 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *memchr(void *s, int c, size_t n)
{
	int i = 0;
	unsigned char *p = s;
	while(n > 0 && *p != c)
	{
		n--;
		p++;
	}
	if(*p == c)
	{
		return p;
	}
	else
	{
		return NULL;
	}	
}
