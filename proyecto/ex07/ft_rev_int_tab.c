/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:28:11 by damedina          #+#    #+#             */
/*   Updated: 2023/07/08 14:34:08 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//Función que invierte un array de int
void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	indice;

	indice = 0;
	while (indice < size / 2)
	{
		swap = tab[indice];
		tab[indice] = tab[size - 1 - indice];
		tab[size - 1 - indice] = swap;
		indice++;
	}
}
/*
int	main(void)
{
	int	tab[3] = {0, 1, 2};
	int	size;

	size = 3;
	printf("%d%d%d\n", tab[0], tab[1], tab[2]);
	ft_rev_int_tab(tab, size);
	printf("%d%d%d\n", tab[0], tab[1], tab[2]);
	return (0);
}
*/
