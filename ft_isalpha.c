/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <gguardam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 10:42:33 by gguardam          #+#    #+#             */
/*   Updated: 2025/04/21 11:56:11 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	printf("%d\n",ft_isalpha('a'));
	printf("%d\n",ft_isalpha('#'));
	printf("%d\n",ft_isalpha('8'));
	printf("%d\n",ft_isalpha('A'));
	return 0;
}
