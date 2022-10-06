/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:51:46 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/31 13:58:17 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	k;

	i = 1;
	k = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		k *= (i + 1);
		i++;
	}
	return (k);
}

/*int	main()
{
	printf("%d\n", ft_iterative_factorial(0));
	return (0);
}*/
