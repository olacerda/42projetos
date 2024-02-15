/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:47:21 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/14 21:25:18 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 6;
	printf("Valor a: %i\n", a);
	printf("Valor b: %i\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("\napos ft_ultimate_div_mod->\n\n");
	printf("Valor de a: %i -> (a/b)\n", a);
	printf("Valor de b: %i -> (restante de a/b)\n", b);
}
*/
