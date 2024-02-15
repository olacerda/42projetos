/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 07:01:18 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/15 07:38:02 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	strleng(char *str)
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
	unsigned int	total_size;

	dest_size = strleng(dest);
	src_size = strleng(src);
	total_size = dest_size + src_size;
	c = 0;
	total_size = dest_size + src_size;
	if (size <= dest_size)
		return (src_size + size);
	while (src[c] && dest_size + c < size - 1)
	{
		dest[dest_size + c] = src[c];
		c++;
	}
	dest[dest_size + c] = '\0';
	return (total_size);
}

/*
int	main(void)
{
	char			dest[20] = "Hello, ";
	char			*src = "world!";
	unsigned int	size;
	unsigned int	dest_size;
	unsigned int	new_size;

	size = sizeof(dest);
	dest_size = size;
	printf("Stream original -> %s\n", dest);
	printf("Buffer original -> %u\n\n", dest_size);
	new_size = ft_strlcat(dest, src, size);
	printf("Stream apos strlcat -> %s\n", dest);
	printf("Buffer apos strlcat -> %i\n", new_size);
	return (0);
}
*/
