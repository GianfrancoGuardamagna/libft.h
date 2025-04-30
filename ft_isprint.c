/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:41:06 by gguardam          #+#    #+#             */
/*   Updated: 2025/04/22 12:24:44 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	isprint(int c)
{
	if(c >= 32 && c <= 126)
	{
		return c;
	}
	else
	{
		return 0;
	}
}

int	main()
{
	int count = 0;
	char str[13] = "Hola \n mundo";
    	int length = strlen(str);
    	while(count <= length)
	{
		printf("%c",isprint(str[count]));
		count++;
	}
	return 0;
}
