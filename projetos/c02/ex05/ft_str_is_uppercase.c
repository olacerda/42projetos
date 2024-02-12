/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:00:33 by marvin            #+#    #+#             */
/*   Updated: 2024/02/08 15:00:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (str[i] < 65 || str[i] > 90)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av){
    if (ac != 2)
        return (0);
    printf("%i\n", ft_str_is_uppercase(av[1]));
}