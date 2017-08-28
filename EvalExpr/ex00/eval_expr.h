/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 19:16:49 by vfil              #+#    #+#             */
/*   Updated: 2017/08/13 14:24:31 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		eval_expr(char *str);
int		culc(void);
int		find_md(void);
int		parse_n(void);
int		ft_strlen(char *str);

char	*g_str2;

#endif
