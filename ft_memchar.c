/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:22:44 by gguardam          #+#    #+#             */
/*   Updated: 2025/05/03 18:39:33 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchar(void *s, int c, size_t n)
{
	unsigned char	*p;	

	p = s;
	while (n > 0 && *p != (unsigned char)c)
	{
		n--;
		p++;
	}
	if (n > 0 && *p == (unsigned char)c)
		return (p);
	return (NULL);
}
