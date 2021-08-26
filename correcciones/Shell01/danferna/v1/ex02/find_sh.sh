#! /bi/bash
#Escriba en una linea de comandos que busque en el directorio en
# curso y en todos subdirectorios todos los archivos cuyo nombre
# de termine po ".sh"(sin las comillas) y no muestre nada más que
# sus nombres, sin el .sh.

basename $(find . -type f -name '*.sh') | sed -n 's/\.sh$//p'
