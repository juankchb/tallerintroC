/*
*Nombre: Juan Camilo Fernandez
*Taller 1 Intro a C
*Biblioteca Producto dos num
*/

#include "pro_lib.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>


/********************** DEFINICIONES DE LAS FUNCIONES ******************/
void bienvenida_producto(){
	int num1,num2;
	int resultado;
	printf("**********************************\n");
	printf("            BIENVENIDO            \n");
	printf("       APP CALCULO PRODUCTO       \n");
	printf("**********************************\n");
	
	printf("Ingrese el primer numero: \n");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: \n");
	scanf("%d", &num2);

	resultado=num1*num2;
	printf("El resultado del producto es: %d \n",resultado);
}


