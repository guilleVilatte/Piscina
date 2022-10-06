/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:15:50 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/31 16:00:29 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < (nb / i))
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*int main(void)
{
	printf("%d\n", ft_sqrt(256));
	return (0);
}*/
