/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 01:27:51 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/15 06:50:56 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = dest;
	while (str[i])
		i++;
	while (src[j])
	{
		str[i] = src[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	dest[20] = "Frase 1, ";
	char	src[] = "Frase 2!";

	printf("Frase original -> %s\n", dest);
	ft_strcat(dest, src);
	printf("Frase apos strcat -> %s\n", dest);
	return (0);
}
*/
