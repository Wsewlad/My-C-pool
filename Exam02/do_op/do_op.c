/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:44:41 by exam              #+#    #+#             */
/*   Updated: 2017/08/11 15:24:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int argc, char **argv)
{
	int		(*func[5])(int a, int b);
	int		res;

	func[0] = myadd;
	func[1] = mymin;
	func[2] = mymul;
	func[3] = mydiv;
	func[4] = mymod;
	if (argc != 4 || ft_strlen(argv[2]) != 1)
	{
		printf("\n");
		return (0);
	}
	res = func[f_index(argv[2][0])](atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", res);
	return (0);
}
