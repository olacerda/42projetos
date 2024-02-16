/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/02/11 13:48:09 by marvin            #+#    #+#             */
/*   Updated: 2024/02/11 13:48:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	number;

	number = 0;
	while (str[number])
	{
		number++;
	}
	return (number);
}

/*
int	main(void)
{
	char	*str = "abcd";
	int		length = ft_strlen(str);

	printf("O número de caracteres na stream ( %s ) é: %d\n", str, length);
	return (0);
}
*/
