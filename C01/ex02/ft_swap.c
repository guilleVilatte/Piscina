/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:48:36 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/16 12:47:49 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	k;

	k = *a;
	*a = *b;
	*b = k;
}

/*int main()
{
	int a;
	int b;
	int *ptr;
	int *ptr2;
	
	a = 12;
	b = 42;
	ptr = &a;
	ptr2 = &b;
	ft_swap(ptr, ptr2);
	printf("%d/n", a);
	printf("%d", b);
}*/
