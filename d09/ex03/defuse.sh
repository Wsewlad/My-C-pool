# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/03 20:45:21 by vfil              #+#    #+#              #
#    Updated: 2017/08/03 21:28:26 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

stat -r bomb.txt | cut -f 9 -d ' ' | awk '{print $1"-"1}' | bc
