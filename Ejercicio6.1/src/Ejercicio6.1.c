/*
 ============================================================================
Ejercicio 6-1:
Disponemos de dos variables numéricas (a y b).
Realizar un algoritmo que permita el intercambio de valores de dichas variables.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 2
int main(void) {

	int i;
	int j;
	int listaNumeros[TAM] = {9,2};
	int aux;

	//Mostrar Array
	for(i=0;i<TAM;i++){
		printf("La posicion es %d y el valor es %d",i,listaNumeros[i]);
	}

	for(i=0;i<TAM-1;i++){
		for(j=i+1;j<TAM;j++){
			if(listaNumeros[i]>listaNumeros[j]){
				aux = listaNumeros[i];
				listaNumeros[i] = listaNumeros[j];
				listaNumeros[j] = aux;
			}
		}

	}
}
