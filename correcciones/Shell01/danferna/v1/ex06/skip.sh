#! /bi/bash
# Escriba una línea de comandos que muestre un ls -l
# cada dos líneas, a partir de la primera

ls -l | awk '(NR%2)!=0'
