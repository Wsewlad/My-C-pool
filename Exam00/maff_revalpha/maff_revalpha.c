/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 14:54:43 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 15:10:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		maff_revalpha(void)
{
	int n;
	int c;
	char m;

	n = 26;
	m = '\n';
	while (n > 0)
	{
		if (n % 2 == 1)
		{
			c = n - 1 + 'A';
		}
		else
		{
			c = n - 1 + 'a';
		}
		write(1, &c, 1);
		n--;
	}
	write(1, &m, 1);
	return (0);
}

int		main(void)
{
	maff_revalpha();
	return (0);
}
