/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:45:44 by gguardam          #+#    #+#             */
/*   Updated: 2025/04/21 14:49:44 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if(c >= 0 && c <= 9)
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
	printf("%d\n",ft_isdigit('a'));
	printf("%d\n",ft_isdigit('#'));
	printf("%d\n",ft_isdigit(8));
	printf("%d\n",ft_isdigit('A'));
	return 0;
}
