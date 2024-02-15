/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:47:30 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/14 23:06:18 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	number;
	int	i;

	number = 0;
	while (number < size / 2)
	{
		i = tab[number];
		tab[number] = tab[size - number -1];
		tab[size - number -1] = i;
		number++;
	}
}

/*
int	main(void)
{
	int	a[] = {2, 7, 2, 7, 9, 3, 1, 4, 2};
	int	b;
	int	i;

	i = 0;
	b = sizeof(a) / sizeof(a[0]);
	printf("Array original: ");
	while (i < b)
	{
		printf("%d", a[i]);
		i++;
	}
	printf("\n\n");
	ft_rev_int_tab(a, b);
	printf("Apos ft_rev_int_tab: ");
	i = 0;
	while (i < b)
	{
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
*/
