ldapsearch -Q uid="*bon*" | grep '^uid:' | wc -l | tr -d " "
