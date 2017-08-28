cat /etc/passwd | sed '/^#/d' | awk 'NR % 2 == 0' | cut -d : -f 1 | rev | sort -r | awk 'NR >= '$FT_LINE1' && NR <= '$FT_LINE2'' | awk '2 > 0' ORS=', ' | rev | sed "s/ ,/./" | rev | tr -d "\n"
