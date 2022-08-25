/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:11:47 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/10/10 18:42:31 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
