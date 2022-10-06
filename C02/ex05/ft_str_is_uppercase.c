/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:18:20 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/17 11:32:40 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int main()
{
	char	str[] = "ASDASDdsaA";
	int	ptr;

	ptr = ft_str_is_uppercase(str) + 48;
	write(1, &ptr, 1);
	return 0;
}*/
