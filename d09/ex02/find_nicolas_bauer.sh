# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/03 20:33:47 by vfil              #+#    #+#              #
#    Updated: 2017/08/03 20:36:00 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat $1 | grep "nicolas" | grep "bauer" | cut -f3 | grep "[0-9]"
