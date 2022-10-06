/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:47:24 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/16 12:49:39 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	k;

	k = *a;
	*a = *a / *b;
	*b = k % *b;
}

/*int main()
{
	int a;
	int b;
	int *ptr;
	int	*ptr2;

	a = 20;
	b = 10;
	ptr = &a;
	ptr2 = &b;
	ft_ultimate_div_mod(ptr, ptr2);
	printf("%d\n", *ptr);
	printf("%d\n", *ptr2);
}*/
