/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespases.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 10:23:39 by vfil              #+#    #+#             */
/*   Updated: 2017/08/05 20:34:41 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src, int chrs)
{
	char	*dest;
	int		i;

	dest = (char*)malloc(sizeof(*src) * (chrs + 1));
	i = 0;
	while (i < chrs)
	{
		dest[i] = src[i];
		if (dest[i] != src[i])
			return (0);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		check_chr(char c)
{
	if (c != '\0')
	{
		if (c == '\n' || c == '\t' || c == ' ')
			return (1);
	}
	return (0);
}

int		check_no_chr(char c)
{
	if (c != '\0')
	{
		if (c != ' ' && c != '\t' && c != '\n')
			return (1);
	}
	return (0);
}

int		find_words(char *str)
{
	int		counter;
	int		i;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		while (check_no_chr(str[i]))
			i++;
		if (i > 0)
			counter++;
		while (check_chr(str[i]))
			i++;
		if (str[i] == '\0')
			return (counter);
		i++;
	}
	return (counter);
}

char	**ft_split_whitespases(char *str)
{
	int		i;
	int		w;
	int		chr;
	char	**splits_arr;

	splits_arr = (char**)malloc(sizeof(char*) * (find_words(str) + 1));
	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		chr = 0;
		while (check_no_chr(str[i]))
		{
			i++;
			chr++;
		}
		if (chr > 0)
			splits_arr[w++] = ft_strdup(&str[i - chr], chr);
		while (check_chr(str[i]))
			i++;
	}
	splits_arr[w] = 0;
	return (splits_arr);
}
