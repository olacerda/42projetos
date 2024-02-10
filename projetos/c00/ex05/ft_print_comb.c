/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 23:32:09 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/06 22:01:53 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '1';
	while (!(a == '7' && b == '8' && c == '9'))
	{
		if (b == '8')
		{
			(a++);
			(b = (a + 1));
			(c = (b));
		}
		if (c == '9')
		{
			b++;
			c = (b + 1);
		}
		else
			c++;
		ft_print(a, b, c);
	}
}

//int	main(void)
//{
//	ft_print_comb();
//}
