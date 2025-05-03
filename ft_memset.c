/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:11:09 by gguardam          #+#    #+#             */
/*   Updated: 2025/04/30 16:45:59 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char byte;

	p = (unsigned char *) s;
	byte = (unsigned char) c;
	while (n > 0)
	{
		*p = byte;
		n--;
		p++;
	}
	return (s);
}
