/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:33:29 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/19 13:29:06 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	if (size != 0)
	{
		while (i < (size -1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[k] != '\0')
		k++;
	return (k);
}

/*int main()
{
	char	a[20];
	char	b[10];
	int n;
	int n2;


	strcpy(a, "hola");
	strcpy(b, "guillermo");
	n = 5;
	n2 = ft_strlcpy(a, b, n);
	printf("%d\n", n2);
	printf("%s\n", a);

	printf("--------------------------\n");	
	strcpy(a, "hola");
	strcpy(b, "guillermo");
	n = 5;
	n2 = strlcpy(a, b, n);
	printf("%d\n", n2);
	printf("%s\n", a);

	printf("+++++++++++++++++++++++++++\n");	

	strcpy(a, "hola");
	strcpy(b, "guillermo");
	n = 10;
	n2 = ft_strlcpy(a, b, n);
	printf("%d\n", n2);
	printf("%s\n", a);

	printf("--------------------------\n");	
	strcpy(a, "hola");
	strcpy(b, "guillermo");
	n = 10;
	n2 = strlcpy(a, b, n);
	printf("%d\n", n2);
	printf("%s\n", a);
	return 0;
}*/
