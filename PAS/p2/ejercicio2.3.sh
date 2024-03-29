#! /bin/bash

echo -e "\t  Contraseña\t\tMinusculas\tMayusculas\tNúmeros\t\tSímbolos\tPuntos"
echo -e "\t===================================================================================================== "

for x in $(cat pass.txt)
do	
	a=$(echo "$x" | tr -d "\n")

	b=$(echo  "$x" | grep --color -o -E '[a-z]+' | tr -d "\n" | wc -c ) 
	
	c=$(echo  "$x" | grep --color -o -E '[A-Z]+' | tr -d "\n" | wc -c )

	d=$(echo  "$x" | grep --color -o -E '[0-9]+' | tr -d "\n" | wc -c )

	e=$(echo  "$x" | grep --color -o -E '[[:punct:]]+' | tr -d "\n" | wc -c  )

	let "sum = $b + $c + $d + $e "
	let total=0


	if [ $sum -ge 8 ]
	then
		total=5

	elif [ $sum -ge 15 ]
	then
		total=20
	fi

	if [ $b -gt 0 ] ##minusculas
	then
		let "total = $total + 10 "
		let "total = $total + $b*2 "
	fi
	
	if [ $c -ge 0 ] ##mayusculas
	then
		let "total = $total + 10 "
		let "total = $total + $c*2 "
	fi

	if [ $d -gt 0 ] ##numeros
	then
		let "total = $total + 5 "
		let "total = $total + $d "
	fi	
	
	if [ $e -gt 0 ] ##simbolos
	then
		let "total = $total + 15 "
		let "total = $total + $e*3 "
	fi

	

	if [ $sum -lt 5 ]
	then
		total=0
	fi
	
	

	printf " %23s \t    %3d \t %3d \t\t %3d \t\t %3d \t\t %3d\n" $a $b $c $d $e $total

done | sort -k 6 -n -r