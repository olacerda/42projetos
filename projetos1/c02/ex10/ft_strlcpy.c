/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 06:18:34 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/16 00:09:50 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len] != '\0' && src_len < size - 1)
	{
		dest[src_len] = src[src_len];
		src_len++;
	}
	dest[src_len] = '\0';
	while (src[src_len] != '\0')
		src_len++;
	return (src_len);
}

/*
int	main(void)
{
	char			dest[20];
	char			*src;
	unsigned int	copia;

	src = "oi oi oi oi";
	copia = ft_strlcpy(dest, src, sizeof(dest));
	printf("String copiada: %s\n", dest);
	printf("Comprimento da string de origem: %u\n", copia);
	return (0);
}
*/
