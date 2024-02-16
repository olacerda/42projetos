/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:36:15 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/16 03:07:22 by olacerda         ###   ########.fr       */
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
		return (str);
	while (*str)
	{
		s = str;
		while (*t && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
			return (str);
		str++;
		t = to_find;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	str[] = "Hello, world!";
	char	to_find[] = "";
	char	*result = ft_strstr(str, to_find);

	if (result != NULL)
	{
		printf("_%s_ encontrado na posicao %ld\n", to_find, result - str);
	}
	else
	{
		printf("_%s_ nao encontrado em _%s_\n", to_find, str);
	}
	return (0);
}
*/
