/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rascunho.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 23:41:32 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/12 01:14:53 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void put(char a)
{
   write(1, &a, 1);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        put('-');
        nb = -nb;
    }
    else
    {
        while(nb >= 10)
        {
            put( nb % 10 + '0');
            nb = nb / 10;
        }
        put(nb + '0');
    }  
}

int main()
{
    int nb;

    nb = 122;
    ft_putnbr(nb);
}
