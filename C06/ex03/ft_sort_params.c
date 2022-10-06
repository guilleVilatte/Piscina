/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:22:34 by gvilatte          #+#    #+#             */
/*   Updated: 2022/08/26 15:50:26 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*g_a;
int		g_i;
int		g_j;
int		g_q;

void	ft_sort_int_tab(char **tab, int size)
{
	g_i = 0;
	while (g_i++ < size)
	{
		g_j = g_i + 1;
		g_q = 0;
		while (g_j < size)
		{
			if (tab[g_i][g_q] > tab[g_j][g_q])
			{
				g_a = tab[g_i];
				tab[g_i] = tab[g_j];
				tab[g_j] = g_a;
				g_j++;
				g_q = 0;
			}
			else if (tab[g_i][g_q] == tab[g_j][g_q])
				g_q++;
			else
			{
				g_j++;
				g_q = 0;
			}
		}
	}
}

int	main(int argc, char **argv)
{
	int	k;
	int	p;

	ft_sort_int_tab(argv, argc);
	p = 1;
	while (p < argc)
	{
		k = 0;
		while (argv[p][k])
		{
			write(1, &argv[p][k], 1);
			k++;
		}
		write(1, "\n", 1);
		p++;
	}
}
