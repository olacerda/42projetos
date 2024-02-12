/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rascunho4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 01:29:28 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/12 05:53:45 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int sinalcount(char *str)
{
    int number;
    int i;

    i = 0;
    number = 0;
    while(str[number])
    {
        if(str[number] == 45)
            i++;
        if (i > 1)
            i = 0;
        number++;
    }
    return (i);
}

int ft_atoi(char *str)
{
    int number;
    int numberofn;
    int result;
    
    number = 0;
    result = 0;
    while(str[number] < '0' || str[number] > '9')
        number++;
    while (str[number] >= '0' && str[number] <= '9')
        {
            result = result * 10 + (str[number] - '0');
            number++;
        }
    numberofn = sinalcount(str);
    if (numberofn == 1)
        result = -result;
    return (result);
}

int main(int argc, char **argv)
{
    int a;
    
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
