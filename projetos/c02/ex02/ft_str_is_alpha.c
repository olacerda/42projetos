/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:34:58 by marvin            #+#    #+#             */
/*   Updated: 2024/02/08 17:34:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = '0';

    if (str[i] = '\n')
    {
        return (1);
    }
    else
    {
        while(str[i] && ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
            i++;
        if (str[i] == '\0')
            return (1);
        else
            return (0);
        
        
        
        
        {
            if ((str[i] < 65 || > 90) || (str[i] < 67 || > 122))
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
