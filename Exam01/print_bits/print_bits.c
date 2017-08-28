/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 19:38:05 by exam              #+#    #+#             */
/*   Updated: 2017/08/04 21:14:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	int l;

	l = ft_strlen(str);
	i = 0;
	while (i <= l)
	{
		ft_putchar(str[l - i]);
		i++;
	}
}

void	print_bits(unsigned char octet)
{
	int		n;
	int		i;
	char	str[] = "00000000";

	i = 0;
	n = (int)octet;
	while (n > 1)
	{
		str[i] = n % 2 + 48;
		n = n / 2;
		i++;
	}
	str[i - 1] = '0';
	ft_putstr(str);
	ft_putchar('\n');
}
