/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 01:46:23 by vfil              #+#    #+#             */
/*   Updated: 2017/08/04 05:38:24 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int				i;
	int				j;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	j = 0;
	while ((s1[i] == ' ' || s1[i] == '\n' || s1[i] == '\t') && s1[i] != s2[j])
		i++;
	while (s1[i] == s2[j] && s1[i] != '\0' && s2[j] != '\0')
	{
		i++;
		j++;
	}
	if (s1[i] == ' ' || s1[i] == '\n' || s1[i] == '\t')
		return (0);
	c1 = s1[i];
	c2 = s2[j];
	return (c1 - c2);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int		i;
	int		flag;
	char	*str;

	i = 1;
	flag = 0;
	if (argc > 1)
	{
		while (argv[i] != '\0')
		{
			str = ft_strlowcase(argv[i]);
			if (ft_strcmp(str, "president") == 0 ||
					ft_strcmp(str, "attack") == 0 ||
					ft_strcmp(str, "powers") == 0)
				flag = 1;
			i++;
		}
		if (flag == 1)
			ft_putstr("Alert!!!\n");
	}
	return (0);
}
