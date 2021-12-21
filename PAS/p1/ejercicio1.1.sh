#Ejemplo de ejecución: ./ej1.sh nombre_carpeta

#!/bin/bash 
# $1 se refiere al primer argumento de la linea

if [ -d $1 ]
then
    for x in $(find $1) 
    do
        nombre=$(basename $x)                          #basename devuelve el nombre del fichero sin la ruta donde se encuentra
        echo -n "$nombre <- "	
        caracteres=$(echo -n $nombre | wc -m )	
        if [ $caracteres -eq 1 ]                                #comparacion singular o plural
        then
            echo "$caracteres caracter"
        else
            echo "$caracteres caracteres"
        fi
            
    done
fi 

if [ -d $1 ]
then
    for x in $(find $1) 
    do
        nombre=$(basename $x)           #basename para obtener el nombre del fichero
        carpeta=$(dirname $x)	        #devuelve la carpeta donde se aloja el fichero
        ruta=$(pwd $carpeta)   #pwd para devolver la ruta absoluta de la carpeta				
        caracteres=$(echo -n $nombre | wc -m )	
            
        let modulo=$caracteres%2 #Calculo modulo de caracteres para saber si es impar o par	
        if [ $modulo != 0 ]
        then	
            #mirando el man stat se pueden sacar todos.
            i_nodo=$(stat -c "i-nodo %i" $x)
            bytes=$(stat -c "%s" $x)
            kilobytes=$[$bytes/1024]
            permiso=$(stat -c "permisos: %a" $x)
            usuario=$(stat -c "%U" $x)
            grupo=$(stat -c "%G" $x)
            echo "$nombre, $ruta, $i_nodo, $bytes bytes ($kilobytes K), $permiso, $usuario : $grupo"
        fi	
    done
fi 