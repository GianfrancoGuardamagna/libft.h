/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:02:37 by gguardam          #+#    #+#             */
/*   Updated: 2025/04/21 15:04:27 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if((c >= 0 && c <= 9) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	printf("%d\n",ft_isalnum('a'));
	printf("%d\n",ft_isalnum('#'));
	printf("%d\n",ft_isalnum(8));
	printf("%d\n",ft_isalnum('A'));
	return 0;
}

