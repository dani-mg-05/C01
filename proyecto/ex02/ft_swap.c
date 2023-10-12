/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:41:08 by damedina          #+#    #+#             */
/*   Updated: 2023/07/06 15:22:36 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//Función que intercambia los valores de las variables de los punteros
void	ft_swap(int *a, int *b)
{
	int	numero;

	numero = *a;
	*a = *b;
	*b = numero;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 5;
	printf("Antes:\nA: %d\nB: %d\n\n", a, b);
	ft_swap(&a, &b);
	printf("Despues:\nA: %d\nB: %d", a, b);
	return (0);
}
*/
