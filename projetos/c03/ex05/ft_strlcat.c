/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 07:01:18 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/10 10:53:02 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	strleng(char *str)
{
	unsigned int	number;

	number = 0;
	while (str[number])
	{
		number++;
	}
	return (number);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	c;

	dest_size = 0;
	src_size = 0;
	c = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[src_size])
		src_size++;
	if (size <= dest_size)
		src_size += size;
	else
		src_size += dest_size;
	while (src[c] && (dest_size + 1) < size)
	{
		dest[dest_size] = src[c];
		dest_size++;
		c++;
	}
	dest[dest_size] = '\0';
	return (src_size);
}

/*int	main() 
{
    char dest[7] = 	"Hello, ";
    char *src = 	"world!";
    unsigned int size =	sizeof(dest);
	
	printf("Stream original -> %s\n", dest);
	unsigned int dest_size = size;
	printf("Buffer original -> %u\n\n", dest_size);
	unsigned int new_size =		ft_strlcat(dest, src, size);
	printf("Stream apos strlcat -> %s\n", dest);
    printf("Buffer apos strlcat -> %i\n", new_size);

    return 0;
}
*/
