/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:06:08 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/24 14:03:48 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	k = 0;
	while (dest[k] != '\0')
		k++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[k] = src[i];
		k++;
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

/*int	main()
{
	char	s1[100] = "";
	char	s2[] = "hola que tal?";

//	printf("%s\n", ft_strcat(s1, s2));
	printf("%s\n", strcat(s1, s2));
	return (0);
}*/
