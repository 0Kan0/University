#!/bin/bash

procesos=10

if [ $1 ]; then
    procesos=$1
fi

echo -n "Memoria total: " && cat /proc/meminfo | awk 'FNR == 1 {print $2 $3}'
echo -n "Memoria libre: " && cat /proc/meminfo | awk 'FNR == 2 {print $2 $3}'
echo -n "Memoria disponible: " && cat /proc/meminfo | awk 'FNR == 3 {print $2 $3}'
echo -n "Memoria en uso como caché de disco: " && cat /proc/meminfo | awk 'FNR == 5 {print $2 $3}'
echo -n "Tamaño total de la memoria swap: " && cat /proc/meminfo | awk 'FNR == 15 {print $2 $3}'
echo -n "Memoria swap libre: " && cat /proc/meminfo | awk 'FNR == 16 {print $2 $3}'

echo -e "Top-$procesos procesos en uso de memoria."
echo -e "=============================================="
echo -e "Usuario \t\t % Uso \t Proceso"
echo -e "=============================================="
ps aux --sort -rss | awk 'NR>1{print $1," \t \t \t" $4, "\t" $11}' | head -n $procesos