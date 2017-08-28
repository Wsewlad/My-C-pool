/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cell.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 13:16:22 by sahafono          #+#    #+#             */
/*   Updated: 2017/08/06 19:51:39 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CELL_H

# define CELL_H
# define EMPTY 0
# define FILLED 1

typedef struct	s_cell
{
	int			x;
	int			y;
	char		value;
	int			variants[10];
}				t_cell;
#endif
