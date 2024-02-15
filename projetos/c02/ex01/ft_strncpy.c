/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: olacerda <olacerda@student.42.fr>              +#+  +:+
	+#+    */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/02/08 15:25:05 by marvin            #+#    #+#             */
/*   Updated: 2024/02/08 15:25:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\n' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	unsigned int	number;
	char			source[] = "Uma frase";
	char			destination[20];

	number = 9;
	ft_strncpy(destination, source, number);
	printf("Stream copiada: %s\n\n", destination);
	return (0);
}
*/
