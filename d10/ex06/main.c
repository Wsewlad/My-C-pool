/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 09:09:35 by vfil              #+#    #+#             */
/*   Updated: 2017/08/08 14:12:34 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	int		val1;
	int		val2;
	int		(*p[5])(int a, int b);
	int		res;

	p[0] = sum;
	p[1] = subtract;
	p[2] = mul;
	p[3] = div;
	p[4] = mod;
	if (argc == 4)
	{
		val1 = ft_atoi(argv[1]);
		val2 = ft_atoi(argv[3]);
		if (check_op(argv[2]) != 1)
		{
			ft_putnbr(0);
			return (0);
		}
		if (d_m_z(argv[2][0], val2) == 0)
			return (0);
		res = p[f_index(argv[2][0])](val1, val2);
		ft_putnbr(res);
	}
	return (0);
}
