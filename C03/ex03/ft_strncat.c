/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:46:59 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/23 20:42:43 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				k;

	k = 0;
	while (dest[k] != '\0')
		k++;
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[k++] = src[i];
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

/*int main()
{
    char    s1[100] = "hola";
    char    s2[] = " que tal?";
	unsigned int	nb;

	nb = 3000;
    printf("%s\n", ft_strncat(s1, s2, nb));
	printf("%s\n", strncat(s1, s2, nb));
    return (0);
}*/
