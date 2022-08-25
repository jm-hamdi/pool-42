/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 10:15:43 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/10/03 12:27:50 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlchar(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	n;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && (j + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	n = ft_strlchar(dest);
	return (n);
}
/*int	main(void) {
  char str1[40] = "ABCa";
  char str2[100] = "DEF";
  unsigned int size;
  size = 10;

  printf("%i \n\n", ft_strlcat(str1, str2, size));
}*/
