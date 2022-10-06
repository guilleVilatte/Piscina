/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:40:40 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/27 14:55:12 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	j;

	j = 0;
	i = 0;
	number = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = str[i] - 48 + (number * 10);
		if (str[i + 1] < 48 || str[i + 1] > 57)
			break ;
		i++;
	}
	if ((j % 2) != 0)
		number = -number;
	return (number);
}

int	main(void)
{
	printf("%d\n", ft_atoi("   -+--++--123sadd345"));
	printf("%d\n", atoi("-123sadd345"));
	return (0);
}
