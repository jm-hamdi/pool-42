/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:25:23 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/10/03 12:34:32 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*int main()
{
  
	char	str1[100] = "Hello, ";
	char	str2[] = "Pinghhjf";
	char	str3[100] = "Hello, ";
	char	str4[] = "Pinghhjf";

  ft_strcat(str1, str2);
  printf(" %s\n\n", str1);

  strcat(str3, str4);
  printf(" %s \n", str3);
}*/
