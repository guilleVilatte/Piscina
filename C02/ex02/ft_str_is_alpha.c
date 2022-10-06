/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:16:24 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/17 13:51:32 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
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

/*int	main()
{
	char	str[] = "gfdgdfgd4234";
	int	ptr;

	ptr = ft_str_is_alpha(str) + 48;
	write(1, &ptr, 1);
	
	return 0;
}*/
