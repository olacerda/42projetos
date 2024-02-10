/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:05:29 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/10 01:27:08 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;
	int		result;

	s1 = "abcd";
	s2 = "abcD";
	result = ft_strcmp(s1, s2);
	if (result == 0)
	{
		printf("%s <- Igual a -> %s\n", s1, s2);
		printf("Diferenca -> %i \n", result);
	}
	else if (result < 0)
	{
		printf("%s <- Menor que -> %s\n", s1, s2);
		printf("Diferenca -> %i \n", result);
	}
	else
	{
		printf("%s <- Maior que -> %s\n", s1, s2);
		printf("Diferenca -> %i \n", result);
	}
	return (0);
}
