/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <gguardam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:21:05 by gguardam          #+#    #+#             */
/*   Updated: 2025/04/30 18:24:36 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	white_spaces(char charsy)
{
	if (charsy == ' ' || charsy == '\t' || charsy == '\n')
		return (1);
	else if (charsy == '\v' || charsy == '\f' || charsy == '\r')
		return (1);
	else
		return (0);
}

int	sign_control(char charsy)
{
	if (charsy == '-')
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (white_spaces(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = sign_control(str[i]);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res > (2147483647 - (str[i] - '0')) / 10)
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648); 
		}
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
