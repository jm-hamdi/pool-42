/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:21:31 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/09/26 19:01:01 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (! (a == '7' && b == '8' && c == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	if (a <= '7')
	{
		while (a <= '7')
		{
			b = a + 1;
			while (b <= '8')
			{
				c = b + 1;
				while (c <= '9')
				{
					ft_print(a, b, c);
					c++;
				}
				b++;
			}
			a++;
		}
	}
}
int	main()
{
	ft_print_comb();
	return(0);
}
