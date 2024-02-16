/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 23:41:32 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/16 03:51:37 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		print('-');
		if (nb <= -2147483648)
		{
			print("2");
			ft_putnbr(147483648);
			return ;
		}
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	print(nb % 10 + '0');
}

/*
int	main(void)
{
	int	nb;

	nb = 42;
	ft_putnbr(nb);
	print('\n');
}
*/
