/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:12:25 by damedina          #+#    #+#             */
/*   Updated: 2023/07/06 15:21:09 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//Función que divide a entre b y guarda el resultado y el resto en div y mod
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 15;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	printf("Div: %d Mod: %d", div, mod);
	return (0);
}
*/
