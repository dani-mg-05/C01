/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:35:09 by damedina          #+#    #+#             */
/*   Updated: 2023/07/06 15:42:04 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//Función que divide a entre b y almacena el resultado en a y el resto en b
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resto;

	resto = *a % *b;
	*a = *a / *b;
	*b = resto;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("A: %d B: %d", a, b);
}
*/
