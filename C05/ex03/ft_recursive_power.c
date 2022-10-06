/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:19:26 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/31 11:53:43 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	else if (power < 0)
		return (0);
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 0));
	return (0);
}*/
