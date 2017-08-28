/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:37:31 by vfil              #+#    #+#             */
/*   Updated: 2017/08/08 14:17:05 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_op(char *str)
{
	char o;

	o = str[0];
	if (str[1] != '\0')
		return (0);
	if (o == '+' || o == '-' || o == '*' || o == '/' || o == '%')
		return (1);
	return (0);
}

int		f_index(char op)
{
	if (op == '-')
		return (1);
	if (op == '*')
		return (2);
	if (op == '/')
		return (3);
	if (op == '%')
		return (4);
	return (0);
}

int		d_m_z(char o, int val2)
{
	if (val2 == 0)
	{
		if (o == '/')
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		if (o == '%')
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
	}
	return (1);
}
