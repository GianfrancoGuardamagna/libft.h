/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <gguardam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:58:14 by gguardam          #+#    #+#             */
/*   Updated: 2025/04/30 15:40:53 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	if(!nmemb || !size)
	{
		return NULL;
	}

	while(nmemb > 0)
	{
		malloc(size);
		nmemb--;
	}
}

int	main()
{
	int i = 5;
	int *array;
	array = (int*)calloc(i, sizeof(int));
	printf("%p\n", &array);
	return 0;
}
