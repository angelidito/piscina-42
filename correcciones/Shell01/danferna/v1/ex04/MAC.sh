#! /bi/bash
#Escriba una linea de comandos que muestre las direcciones MAC
# de su equipo.Cada dirección irá seguida de un salto de línea.

ifconfig -a | grep "ether " | sed 's/.*ether //g'
