/*
*Nombre: Juan Camilo Fernandez
*Taller 1 Intro a C
*Biblioteca Calcular dias
*/

#include "dias_lib.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>


/********************** DEFINICIONES DE LAS FUNCIONES ******************/
/*Funcion encontrar dias*/
void encontrar_dias(){ 
    int numero_dias;
    int ano, semana, dias;
    int dias_semana=7;
    printf("**********************************\n");
    printf("            BIENVENIDO            \n");
    printf("         APP CALCULO DIAS         \n");
    printf("**********************************\n");
	

    printf("Ingrese la cantidad de dias que quiere convertir a anios ,semanas y dias: ");
    scanf("%d", &numero_dias);
    ano = numero_dias / 365; 
    semana = (numero_dias % 365) /dias_semana; 
    dias = (numero_dias % 365) %dias_semana; 

    printf("anios = %d",ano); 

    printf("\nsemanas = %d", semana); 

    printf("\ndias = %d ",dias);     
    
    printf("\n");

} 


