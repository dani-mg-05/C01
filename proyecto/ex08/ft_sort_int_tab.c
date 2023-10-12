/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:26:55 by damedina          #+#    #+#             */
/*   Updated: 2023/07/08 17:37:31 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	indice;
	int	swap;

	while (size >= 0)
	{
		indice = 0;
		while (indice < size - 1)
		{
			if (tab[indice] > tab[indice + 1])
			{
				swap = tab[indice];
				tab[indice] = tab[indice + 1];
				tab[indice + 1] = swap;
			}
			indice++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	tab[5] = {3, 1, 2, 5, 2};
	int	size;

	size = 5;
	printf("%d%d%d%d%d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	ft_sort_int_tab(tab, size);
	printf("%d%d%d%d%d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
*/
