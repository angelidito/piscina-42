#!/bin/bash

cat /etc/passwd | sed "/^#/d" | awk "NR % 2 == 0" | cut -d ":" -f 1 | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr "\n" "," | sed "s/,$/./"
