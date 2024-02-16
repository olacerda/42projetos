/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:47:23 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/14 21:35:01 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	number;

	number = 0;
	while (str[number])
	{
		write(1, &str[number], 1);
		number++;
	}
}

/*
int	main(void)
{
	char	*a;

	a = "Frase aleatoria\n";
	ft_putstr(a);
	return (0);
}
*/
