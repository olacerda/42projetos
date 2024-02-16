/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 23:25:16 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/15 18:51:35 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		number;
	char	i;

	i = '\n';
	number = 0;
	while (str[number])
	{
		write(1, &str[number], 1);
		number++;
	}
	write(1, &i, 1);
}

/*
int	main(void)
{
	char	*str;

	str = "Minha string importante";
	ft_putstr(str);
}
*/
