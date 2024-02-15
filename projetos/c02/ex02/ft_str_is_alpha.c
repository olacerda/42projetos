/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/02/08 17:34:58 by marvin            #+#    #+#             */
/*   Updated: 2024/02/08 17:34:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
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
			if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96
						&& str[i] < 123)))
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

	str = "absfsd2fc";
	number = ft_str_is_alpha(str);
	printf("Apenas alfabeticos ou NULO -> 1\n");
	printf("Qualquer outro character-> 0\n");
	printf("String:  %s\n\n", str);
	printf("Resultado: %i\n", number);
}
*/
