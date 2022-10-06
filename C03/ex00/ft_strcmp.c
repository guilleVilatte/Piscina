/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:09:39 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/24 14:03:37 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i])
			return (-1);
		else
			return (1);
	}
	if (s2[i] == '\0')
		return (0);
	else
		return (-1);
}

/*int main()
{
	printf("%d\n", ft_strcmp("HoLa2", "HoLa*"));
	printf("%d\n", strcmp("HoLa2", "HoLa*"));
	return 0;
}*/
