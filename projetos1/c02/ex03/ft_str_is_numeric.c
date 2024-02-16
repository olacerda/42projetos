/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/02/08 17:48:23 by marvin            #+#    #+#             */
/*   Updated: 2024/02/08 17:48:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\n')
	{
		return (1);
	}
	else
	{
		while (str[i])
		{
			if (str[i] < 48 || str[i] > 57)
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

	str = "12a3";
	number = ft_str_is_numeric(str);
	printf("Apenas numericos ou NULO -> 1\n");
	printf("Qualquer outro character-> 0\n");
	printf("String:  %s\n\n", str);
	printf("Resultado: %i\n", number);
}
*/
