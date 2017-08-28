/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 17:06:36 by vfil              #+#    #+#             */
/*   Updated: 2017/08/07 17:53:12 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char*));

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i < 5)
		return (0);
	return (1);
}


int		main(int argc, char **argv)
{
	if (argc > 1)
		printf("%i\n", ft_count_if(argv, &ft_strlen));
	return (0);
}
