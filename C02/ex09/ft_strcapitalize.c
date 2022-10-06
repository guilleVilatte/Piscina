/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:04:14 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/19 12:59:19 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (str[k] != '\0')
	{
		if (i == 0 && (str[k] >= 97 && str[k] <= 122))
			str[k] -= 32;
		else if (i > 0 && (str[k] >= 65 && str[k] <= 90))
			str[k] += 32;
		i++;
		if (str[k] < 48 || (str[k] > 57 && str[k] < 65))
			i = 0;
		else if ((str[k] > 90 && str[k] < 97) || str[k] > 122)
			i = 0;
		else
			i++;
		k++;
	}
	return (str);
}

/*int main()
{
	char	str[] = "hOla sOy4 gui3ll3, qUe taL?.hola-te~~~43tytu~ew";

	printf("%s\n", ft_strcapitalize(str));
	printf("%s", str);
	return 0;
}*/
