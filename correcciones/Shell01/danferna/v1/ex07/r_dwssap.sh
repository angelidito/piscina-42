#! /bi/bash
cat /etc/passwd | grep -v "#" | awk 'NR%2 ==0'| cut -d ':' -f1 | rev | sort -r | awk -v line1=$FT_LINE1 -v line2=$FT_LINE2 '(NR>=line1)&&(NR<=line2)' | sed -e 's/$/,/' | tr "\n" " " | sed -e 's/, $/./'
