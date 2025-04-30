/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:41:06 by gguardam          #+#    #+#             */
/*   Updated: 2025/04/22 12:48:57 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t strlength(const char *s)
{
	int i = 0;
	while(s[i])
	{
		i++;
	}
	return i;
}

int	main()
{
	char stringy[] = "Hola la vaca lola";
	size_t hdLen = strlen(stringy);
	size_t hvLen = strlength(stringy);
	printf("%zu\n",hdLen);
	printf("%zu\n",hvLen);
	return 0;
}
