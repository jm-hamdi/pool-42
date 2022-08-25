/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:02:47 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/09/29 10:27:47 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int main()
{
    int i;
    char tab1[5];
    char tab2[4]="dsfg";
    unsigned int	n = 3;
    *ft_strncpy(tab1, tab2, n);
    while(tab1[i])
    {
        write (1, &tab1[i], 1);
        i++;
    }
    return 0;
}*/
