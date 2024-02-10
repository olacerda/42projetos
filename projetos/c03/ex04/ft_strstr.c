/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:36:15 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/10 09:09:00 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	const char	*s;
	const char	*t;

	t = to_find;
	if (*to_find == '\0')
		return ((char *)str);
	while (*str)
	{
		s = str;
		while (*t && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
			return ((char *)str);
		str++;
	}
	return (NULL);
}

/*int	main(void)
{
	char *str = "Hello, world!";
	char *to_find = "rld";

	char *result = ft_strstr(str, to_find);
	if (result != NULL)
	{
		printf("%s encontrado na posicao %ld\n", to_find, result - str);
	}
	else
	{
		printf("%s nao encontrado em %s\n", to_find, str);
	}

	return (0);
}
*/