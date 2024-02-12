/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 23:41:32 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/12 03:04:17 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void print(char a)
{
    write(1, &a, 1);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        print('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    print(nb % 10 + '0');
}
    

int main()
{
    int nb;
    
    nb = 42;
    ft_putnbr(nb);
    print('\n');
}
