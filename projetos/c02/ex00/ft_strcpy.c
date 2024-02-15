/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:00:33 by marvin            #+#    #+#             */
/*   Updated: 2024/02/08 15:00:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/*
int	main(void)
{
	char	str1[] = "Arroz com Feijao";
	char	str2[] = "Macarronada";

	printf("Stream original: %s\n", str1);
	printf("Stream copiada: %s\n\n", str2); 
	ft_strcpy(str1, str2);
	printf("Apos ft_strcp ->\n\n");
	printf("Stream : %s\n", str1);
	return (0);
}
*/
