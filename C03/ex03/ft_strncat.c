/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:38:05 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/10/03 11:20:10 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*int main(void)
{
  char dest[50] = "Hello, ";
  char src[50] = " cbfjhjbvn dfhtfg bfyfdgd";
  char dest1[50] = "Hello, ";
  char src2[50] = " hfghfgdf hdfghd grgdf";

  ft_strncat(dest, src, 12);
  printf("%s \n", dest);

  strncat(dest1, src2, 12);
  printf("%s \n", dest1);
}*/
