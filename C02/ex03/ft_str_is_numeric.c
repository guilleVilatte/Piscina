/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:44:18 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/17 13:52:32 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
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
	char	str[] = "";
	int	ptr;

	ptr = ft_str_is_numeric(str) + 48;
	write(1, &ptr, 1);
	return 0;
}*/
