/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:05:26 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/17 13:53:41 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
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
	char str[] = "fdfs43";
	int	ptr;

	ptr = ft_str_is_lowercase(str) + 48;
	write(1, &ptr, 1);
	return 0;
}*/
