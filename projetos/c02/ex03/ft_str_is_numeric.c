/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:48:23 by marvin            #+#    #+#             */
/*   Updated: 2024/02/08 17:48:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str)
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
            if (str[i] < 48 || > 57)
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