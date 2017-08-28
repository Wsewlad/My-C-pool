/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 18:27:39 by vfil              #+#    #+#             */
/*   Updated: 2017/08/08 21:55:51 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

int		main(int argc, char **argv)
{
	int		i;

	if (argc == 4)
	{
		if (d_m_z(argv[2][0], ft_atoi(argv[3])) == 0)
			return (0);
		i = 0;
		if (argv[2][0] == '+' || argv[2][0] == '-' ||
				argv[2][0] == '*' || argv[2][0] == '/' || argv[2][0] == '%')
			while (i < 6)
			{
				if (*g_opptab[i].c == argv[2][0])
				{
					ft_putnbr(g_opptab[i].culc(ft_atoi(argv[1]),
								ft_atoi(argv[3])));
					return (0);
				}
				i++;
			}
		else
			g_opptab[5].culc(1, 1);
	}
	return (0);
}
