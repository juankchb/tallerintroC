/*
*Nombre: Juan Camilo Fernandez
*Taller 1 Intro a C
*Biblioteca Calcular distancia puntos
*/

#include "puntos_lib.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/********************** DEFINICIONES DE LAS FUNCIONES ******************/
/*Funcion calcular distancia*/
void calcularDistancia(){   
	int x1,x2,y1,y2;
	double resultado;
    /*
        distancia = raiz_cuadrada_de(elevar_al_cuadrado(x1-x2) + elevar_al_cuadrado(y1-y2))
    */
    
    printf("Digite x1: "); 
    scanf("%d", &x1);
    printf("Digite y1: "); 
    scanf("%d", &y1);
    printf("Digite x2: "); 
    scanf("%d", &x2);
    printf("Digite y2: "); 
    scanf("%d", &y2);
    resultado=sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("La distancia entre los puntos: %f", resultado);
    printf("\n");
} 




