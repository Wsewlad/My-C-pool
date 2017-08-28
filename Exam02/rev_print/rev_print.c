/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:15:36 by exam              #+#    #+#             */
/*   Updated: 2017/08/11 14:30:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	char	n;
	int		len;
	char	c;

	n = '\n';
	if (argc != 2)
	{
		write(1, &n, 1);
		return (0);
	}
	len = ft_strlen(argv[1]);
	while (len - 1 >= 0)
	{
		c = argv[1][len - 1];
		write(1, &c, 1);
		len--;
	}
	write(1, &n, 1);
	return (0);
}
