/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:14:08 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/16 12:48:44 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int a;
	int b;
	int tab[2];

	a = 20;
	b = 10;
	ft_div_mod(a, b, &tab[0], &tab[1]);
	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
}*/
