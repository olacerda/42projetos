/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 21:53:20 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/16 00:58:21 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i]) 
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0); 
}

/*
int	main(void)
{
	char			*s1;
	char			*s2;
	int				result;
	unsigned int	number;

	s1 = "abcdeg";
	s2 = "abcdeg";
	number = 3;
	result = ft_strncmp(s1, s2, number);
	if (result == 0)
	{
		printf("%s <- %u primeiros caractere(s) IGUAIS que -> %s \n", s1,
			number, s2);
		printf("Diferenca entre os %u primeiros caracteres e -> %i \n", number,
			result);
	}
	else if (result < 0)
	{
		printf("%s <- %u primeiros caractere(s) MENORES que -> %s\n", s1,
			number, s2);
		printf("Diferenca entre os %u primeiros caracteres e -> %i \n", number,
			result);
	}
	else
	{
		printf("%s <- %u primeiros caractere(s) MAIORES que -> %s\n", s1,
			number, s2);
		printf("Diferenca entre os %u primeiros caracteres e -> %i \n", number,
			result);
	}
	return (0);
}
*/
