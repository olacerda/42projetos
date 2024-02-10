/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:47:14 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/07 02:29:16 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int a;
	int b;
	int *ptra;
	int *ptrb;

	a = '10';
	b = '20';
	ptra = &a;
	ptrb = &b;

	ft_swap(ptra, ptrb);
	printf("%d", a);
	printf("%d", b);
}