/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:36:06 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/17 12:12:55 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126 && *str != 127)
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
	char	str[] = "\n123";
	int	ptr;

	ptr = ft_str_is_printable(str) + 48;
	write(1, &ptr, 1);
	return (0);
}*/
