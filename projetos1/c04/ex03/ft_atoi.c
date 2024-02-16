/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 01:29:28 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/16 03:35:37 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	sign_counter(char *str)
{
	int	number;
	int	counter;

	counter = 0;
	number = 0;
	while (str[number])
	{
		if (str[number] == '-')
			counter++;
		number++;
	}
	return (counter);
}

int	ft_atoi(char *str)
{
	int	number;
	int	counter;
	int	result;

	counter = 0;
	number = 0;
	result = 0;
	while (str[number] <= 13 || str[number] == 32)
		number++;
	while (str[number] == '-' || str[number] == '+')
		number++;
	while (str[number] >= '0' && str[number] <= '9')
	{
		result = result * 10 + (str[number] - '0');
		number++;
	}
	counter = sign_counter(str);
	if (counter % 2 != 0)
		result = -result;
	return (result);
}

/*
int	main(int argc, char **argv)
{
	int	a;

	a = ft_atoi(argv[1]);
	if (argc < 2)
	{
		printf("Usage: %s <number>\n", argv[0]);
	}
	else
	{
		printf("%i", a);
		printf("\n");
	}
}
*/
