/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 23:32:09 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/13 20:08:06 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	print;

	print = 'a';
	while (print <= 'z')
	{
		write(1, &print, 1);
		print++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
}
