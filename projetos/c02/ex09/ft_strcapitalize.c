/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 05:15:23 by olacerda          #+#    #+#             */
/*   Updated: 2024/02/15 06:17:15 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

void	ft_while(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > 96 && str[i] < 123) || (str[i] > 47 && str[i] < 58))
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] = str[i] - 32;
				i++;
				while ((str[i] > 96 && str[i] < 123))
					i++;
			}
			else
				while ((str[i] > 96 && str[i] < 123) || (str[i] > 47
						&& str[i] < 58))
					i++;
		}
		if (str[i] > 47 && str[i] < 58)
			while (str[i] > 47 && str[i] < 58)
				i++;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	ft_strlowcase(str);
	ft_while(str);
	return (str);
}

/*
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("String original->\n%s\n\n", str);
	ft_strcapitalize(str);
	printf("String apos ft_strcapitalize ->\n%s\n", str);
}
*/
