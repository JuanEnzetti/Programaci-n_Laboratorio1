/*
 ============================================================================
 Ejercicio 5-1: Pedir 5 números enteros, guardarlos en un Array.
 Calcular la sumatorio de los mismos
 y mostrar los impares ingresados.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define TAM 5

int main(void) {
	setbuf(stdout, NULL);

	int listaNumeros[TAM];
	int i = 0;
	int numero;
	int acumulador = 0;

	if (arrayListasNumeros(listaNumeros, TAM) == 0) {
		for (i = 0; i < TAM; i++) {
			numero = pedirNumero();
			listaNumeros[i] = numero;
			acumulador += numero;
		}

	}



	for (i = 0; i < TAM; i++) {
		printf("En la posicion %d el número es: %d \n ", i, listaNumeros[i]);

	}

	for(i = 0; i < TAM; i++){

		if(listaNumeros[i] %2 != 0){
			printf("la posicion %d es impar y su numero es %d \n ",i,listaNumeros[i]);
		}
	}

	printf("El valor de la suma es: %d \n",acumulador);
}







