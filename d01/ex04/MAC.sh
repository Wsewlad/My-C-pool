ifconfig -a | grep "inet " | cut -d : -f 2 | cut -d " " -f 1
