/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:16:08 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/10/14 12:16:15 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*c;

	l = 0;
	i = 0;
	while (src[l] != '\0')
		l++;
	c = (char *)malloc(sizeof(char) * (l + 1));
	if (c == NULL)
		return (0);
	else
	{
		while (src[i] != '\0')
		{
			c[i] = src[i];
			i++;
		}
		c[i] = '\0';
		return (c);
	}
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					x;

	x = 0;
	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	while (x < ac)
	{
		tab[x].size = ft_strlen(av[x]);
		tab[x].str = av[x];
		tab[x].copy = ft_strdup(av[x]);
		x++;
	}
	tab[x].str = 0;
	return (tab);
}
