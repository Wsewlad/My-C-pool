# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/04 03:13:30 by vfil              #+#    #+#              #
#    Updated: 2017/08/04 03:27:46 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig | grep "broadcast " | cut -d " " -f2 | awk '{if ($1) print $1; else print "Je suis perdu!";}'