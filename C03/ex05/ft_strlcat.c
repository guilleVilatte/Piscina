/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:11:27 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/23 20:43:44 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	length(char *array)
{
	int	i;

	i = 0;
	while (array[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = length(dest);
	j = length(src);
	if (size <= i)
		return (j + size);
	k = 0;
	while (src[k] && (i + 1 < size))
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (length(&src[k]) + i);
}

/*int	main()
{
	unsigned int	size = 3;
	char	dest[] = "hola";
	char	src[] = "que tal";

//	printf("%d\n", ft_strlcat(dest, src, size));
	printf("%lu\n", strlcat(dest, src, size));
//	strlcat(dest, src, size);
	printf("%s\n", src);
	printf("%s\n", dest);
	return(0);
}*/
