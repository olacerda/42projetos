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

int ft_str_is_lowercase(char *str)
{
    int i;

    i = '0';

    if (str[i] = '\n')
    {
        return (1);
    }
    else
    {
        while(str[i])
        {
            if (str[i] < 97 || > 122)
            {
             return (0);
            }
            else
            {
                i++;
            }
            return (1);
        }
    }
}