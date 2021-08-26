#! /bi/bash
#Escriba una linea de comandos que muestre el numero de
# archivos normales y de directorios del directorio en curso de
# todos sus subdirectorios, incluído el "." del directorio
#inicial.

find . | wc -l | tr -d ' '
