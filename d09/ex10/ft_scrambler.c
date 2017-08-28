/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 04:07:29 by vfil              #+#    #+#             */
/*   Updated: 2017/08/04 04:22:40 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp1;
	int temp2;
	int temp3;
	int temp4;

	temp1 = ***a;
	temp2 = *b;
	temp3 = *******c;
	temp4 = ****d;
	*******c = temp1;
	****d = temp3;
	*b = temp4;
	***a = temp2;
}