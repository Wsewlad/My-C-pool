/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 19:28:58 by vfil              #+#    #+#             */
/*   Updated: 2017/08/13 17:39:15 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int	eval_expr(char *str)
{
	int		res;
	int		i;
	int		j;
	int		len_nsp;

	len_nsp = ft_strlen(str);
	i = 0;
	j = 0;
	g_str2 = (char*)malloc(sizeof(char) * (len_nsp + 1));
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			g_str2[j] = str[i];
			j++;
		}
		i++;
	}
	g_str2[j] = '\0';
	res = culc();
	return (res);
}
