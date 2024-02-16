/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:47:27 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/14 22:09:57 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	number;

	number = 0;
	while (str[number])
		number++;
	return (number);
}

/*
int	main(void)
{
	char	*a;
	int		b;

	a = "Frase aleatoria";
	b = ft_strlen(a);
	printf("Tamanho da stream: %i\n", b);
	return (0);
}
*/
