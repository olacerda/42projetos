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

#include <unistd.h>

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i])
		{
			if (!(str[i] > 64 && str[i] < 91))
				return (0);
			i++;
		}
		if (str[i] == '\0')
			return (1);
		return (0);
	}
}

/*
int	main(void)
{
	int		number;
	char	*str;

	str = "ASDA1DASD";
	number = ft_str_is_uppercase(str);
	printf("Apenas alfabeticos-maiusculos ou NULO -> 1\n");
	printf("Qualquer outro character-> 0\n");
	printf("String:  %s\n\n", str);
	printf("Resultado: %i\n", number);
}
*/
