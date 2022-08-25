/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:52:42 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/09/29 12:33:26 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	ft_is_alpha_num(char c)
{
	int	i;

	i = 0;
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		i = 1;
	}
	else if (c <= '9' && c >= '0')
	{
		i = 1;
	}
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	change;
	int	i;

	ft_strlowcase(str);
	change = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			change = 0;
		}
		if (change && (str[i] <= 'z' && str[i] >= 'a'))
		{
			str[i] = str[i] - 32;
			change = 0;
		}
		if (!ft_is_alpha_num(str[i]))
		{
			change = 1;
		}
		i++;
	}
	return (str);
}
/*int main()
{
    int i=0;
    char tab[70]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(tab);

    printf("%s", ft_strcapitalize(tab));

    return 0;
}*/
