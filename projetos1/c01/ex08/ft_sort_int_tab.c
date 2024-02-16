/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:08:27 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/15 00:11:09 by olacerda         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	number;
	int	i;

	number = 0;
	while (number <= size - 2)
	{
		if (tab[number] > tab[number + 1])
		{
			i = tab[number];
			tab[number] = tab[number + 1];
			tab[number + 1] = i;
			number = 0;
		}
		else
			number++;
	}
}

/*
int	main(void)
{
	int	a[] = {5, 4, 3, 2, 1, 4, 7, 5, 3, 6, 4, 5, 4};
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
	ft_sort_int_tab(a, b);
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
