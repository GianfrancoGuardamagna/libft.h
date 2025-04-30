/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:26:04 by gguardam          #+#    #+#             */
/*   Updated: 2025/04/22 12:40:20 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int i = 0;
	char* last_c;
	while(s[i])
	{
		if(s[i] != c)
		{
			i++;
		}
		else if(s[i] == c)
		{
			last_c = &s[i];
			i++;
		}
	}
	if(last_c)
	{
		return last_c;
	}
	else
	{
		return NULL;
	}
}

int	main()
{
	printf("%s\n",ft_strrchr("Entre rios y Santa Fe", 'S'));
	printf("%s\n", strrchr("Entre rios y Santa Fe", 'S'));
	return 0;
}
