/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 02:36:23 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/10 09:10:27 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;
	char			*str;

	i = 0;
	j = 0;
	str = dest;
	while (str[i])
		i++;
	while (src[j] && j < nb)
	{
		str[i] = src[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (dest);
}

int	main(void)
{
	char			dest[50] = "Frase 1, ";
	char			src[] = "Frase 2!";
	unsigned int	number = 5;

	printf("Stream original -> %s\n", dest);
	ft_strncat(dest, src, number);
	printf("Stream apos strcat -> %s\n", dest);
	return (0);
}

