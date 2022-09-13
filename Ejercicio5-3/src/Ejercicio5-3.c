/*
 ============================================================================
 5-3
 Realizar una función que reciba como parámetros un array de enteros y
 un entero por referencia. La función calculara el máximo valor de ese array y utilizara
 el valor por referencia para retornar ese valor.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define TAM 5

int main(void) {
	setbuf(stdout, NULL);

	int listaNumerosEntero[TAM];
	int mayor;

	if (inicializarVector(listaNumerosEntero, TAM) == 0) {
		pedirVector(listaNumerosEntero, TAM);
		numeroMayor(listaNumerosEntero, TAM, &mayor);
	}

	printf("El numero mayor es: %d", mayor);
}



