/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:30:47 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/10/03 12:38:09 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}
/*int main()
{
	char str1[] = "13443";
	char str2[] = "13345";
	int nbr = 4;
	printf("%d \n", ft_strncmp(str1, str2, nbr));
}*/
