/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 23:25:16 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/11 23:40:56 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    int number;
    char i;

    i = '\n';
    number = 0;
    while(str[number])
    {
        write(1, &str[number], 1);
        number++;
    }
    write(1, &i, 1);
}

int main()
{
    char *str;
    
    str = "_Insira aqui sua stream_";
    ft_putstr(str);
}
