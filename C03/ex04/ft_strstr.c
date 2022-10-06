/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:46:56 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/31 13:17:32 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	if (to_find[i] == 0)
		return (str);
	while (str[i] != '\0')
	{
		k = 0;
		if (str[i] == to_find[k])
		{
			while (to_find[k] != '\0')
			{
				if (str[i + k] != to_find[k])
					break ;
				k++;
			}
			if (to_find[k] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*int main()
{
	char	str[] = "hola que tal estas";
	char	to_find[] = "al";

	printf("%s\n", ft_strstr(str, to_find));
//	printf("%s\n", strstr(str, to_find));
	return (0);
}*/
