/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 09:13:21 by vfil              #+#    #+#             */
/*   Updated: 2017/08/08 14:07:42 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		sum(int a, int b);
int		subtract(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		check_op(char *str);
int		f_index(char op);
int		d_m_z(char o, int val2);

#endif
