#! /bi/bash
# Escriba una línea de comandos que determine y muestre
#lista de grupos a los que
# pertenece el usuario indicado en la variable de entorno

id -Gn $FT_USER | tr ' ' ',' | tr -d '\n'
