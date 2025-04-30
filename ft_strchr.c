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

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i = 0;
	while(s[i] != c)
	{
		i++;
	}
	if(s[i] == c)
	{
		return &s[i];
	}
	return NULL;
}

int	main()
{
	printf("%s\n",ft_strchr("Hola", 'l'));
	printf("%s\n", strchr("Hola", 'l'));
	return 0;
}
