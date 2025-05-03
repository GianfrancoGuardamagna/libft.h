/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:25:08 by gguardam          #+#    #+#             */
/*   Updated: 2025/05/03 19:22:51 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static int	string_check(const char *big, const char\
		*little, size_t pos, size_t len)
{
	size_t	i;

	i = 0;
	while (little[i] != '\0')
	{
		if (pos >= len || big[pos] == '\0' || big[pos] != little[i])
			return (0);
		i++;
		pos++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!little || little[0] == '\0')
		return ((char *) big);
	if (!big || strlen(little) > len)
		return (NULL);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			if (string_check(big, little, i, len))
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}
