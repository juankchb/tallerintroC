/*
*Nombre: Juan Camilo Fernandez
*Taller 1 Intro a C
*Biblioteca Imprimir primeros diez numeros
*/

#include "diez_lib.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/********************** DEFINICIONES DE LAS FUNCIONES ******************/
/*Funcion calcular distancia*/
void imprimir(){ 
	int i,j;
	for(i=0;i<10;i++){
		j=i+1;
		printf("%d ", j );
	}

}
