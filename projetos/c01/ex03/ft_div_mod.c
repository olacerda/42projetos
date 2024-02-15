/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:47:17 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/14 20:55:03 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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
	int	div_result;
	int	mod_result;

	a = 20;
	b = 3;
	ft_div_mod(a, b, &div_result, &mod_result);
	printf("Divisão de %d por %d:\n->%d\n", a, b, div_result);
	printf("E o restante é:\n->%d\n", mod_result);
	return (0);
}
*/
