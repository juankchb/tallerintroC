/*
*Nombre: Juan Camilo Fernandez
*Taller 1 Intro a C
*Biblioteca Imprimir triagnulo asteriscos
*/

#include "triangulo_lib.h"
#include <stdio.h>

/********************** DEFINICIONES DE LAS FUNCIONES ******************/
void generar_triangulo(){
    int lineas;
    int i;
    int j;  
    printf("Ingresa la cantidad de líneas para el triángulo (maximo 14): "); 
    scanf("%d", &lineas); 
    while(lineas>14){
    	printf("Por favor ingrese un numero no mayor a 14: "); 
    	scanf("%d", &lineas);
    }
   
    for (i = 1; i <= lineas; i++){ 
        
        for (j = 0; j < i; j++){ 
            printf("*"); 
        } 
        printf("\n"); 
	}
}
