/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 23:32:09 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/06 22:01:43 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8'))
	{
		write(1, ", ", 2);
	}
}

void	ft_while(char a, char b, char c, char d)
{
	while (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		if (b == '9' && c == '9' && d == '9')
		{
			(a++);
			(b = '0');
			(c = '0');
			(d = '0');
		}
		if (c == '9' && d == '9')
		{
			(b++);
			(c = a);
			(d = b);
		}
		if (d == '9')
		{
			c++;
			d = '0';
		}
		else
			d++;
		ft_print(a, b, c, d);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	ft_while(a, b, c, d);
}

//int	main(void)
//{
//	ft_print_comb2();
//}
