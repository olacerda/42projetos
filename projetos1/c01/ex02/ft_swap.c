/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:47:14 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/14 20:39:40 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 10;
	b = 20;
	ptra = &a;
	ptrb = &b;
	printf("Valor de a: %i\n", a);
	printf("Valor de b: %i \n\n", b);
	ft_swap(ptra, ptrb);
	printf("apos swap ->\n\n");
	printf("Valor de a: %d\n", a);
	printf("Valor de b: %d\n", b);
}
*/
