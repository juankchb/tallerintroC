/*
*Nombre: Juan Camilo Fernandez
*Diseno benchmark
*Punto 6
*/

#include <stdlib.h>
#include <math.h>
#include <stdio.h>


void inicializar_matriz(int n, int a[]){
 int i,j;
 for (i=0;i<n;i++){
 	for (j=0;j<n;j++){
 		a[i+j*n] = 1;
 		}
 	}
}

void impresion_matriz(int n, int matriz[]){
  int i,j;
 printf("Matriz A");
 printf("\n");
 for (i=0;i<n;i++){
 	for (j=0;j<n;j++){
 		printf(" %d ",matriz[i+j*n]);
 	}
 	printf("\n");
 	}
}


int main(){ 
    int lineas;
    
    printf("Ingresa la cantidad de líneas para la matriz (maximo 8): "); 
    scanf("%d", &lineas); 
    while(lineas>8){
    	printf("Por favor ingrese un numero no mayor a 8: "); 
    	scanf("%d", &lineas);
    }
    int size=lineas*lineas;
    int matriz[size];
    inicializar_matriz(lineas,matriz);
    impresion_matriz(lineas,matriz);
    return 0; 

} 


