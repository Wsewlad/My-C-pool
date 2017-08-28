/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 11:15:26 by vfil              #+#    #+#             */
/*   Updated: 2017/08/13 15:05:40 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int	culc(void)
{
	int	md1;
	int	md2;

	md1 = find_md();
	while (*g_str2 == '+')
	{
		++g_str2;
		md2 = find_md();
		md1 = md1 + md2;
	}
	while (*g_str2 == '-')
	{
		++g_str2;
		md2 = find_md();
		md1 = md1 - md2;
	}
	return (md1);
}

int	find_md(void)
{
	int num1;
	int	num2;

	num1 = parse_n();
	while (*g_str2 == '*')
	{
		++g_str2;
		num2 = parse_n();
		num1 = num1 * num2;
	}
	while (*g_str2 == '/')
	{
		++g_str2;
		num2 = parse_n();
		num1 = num1 / num2;
	}
	while (*g_str2 == '%')
	{
		++g_str2;
		num2 = parse_n();
		num1 = num1 % num2;
	}
	return (num1);
}

int	parse_n(void)
{
	int	n;

	n = 0;
	while (*g_str2 >= '0' && *g_str2 <= '9')
	{
		n = n * 10;
		n = n + *g_str2 - '0';
		++g_str2;
	}
	if (*g_str2 == '(')
	{
		++g_str2;
		n = culc();
		++g_str2;
	}
	return (n);
}
