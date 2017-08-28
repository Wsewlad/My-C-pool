/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 18:24:36 by vfil              #+#    #+#             */
/*   Updated: 2017/08/08 22:03:20 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

typedef int		(*t_s_opp)(int a, int b);

typedef struct	s_opp
{
	char		*c;
	t_s_opp		culc;
}				t_opp;

void			ft_putchar(char c);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);
int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_usage(int a, int b);
int				check_op(char *str);
int				d_m_z(char o, int val2);

#endif
