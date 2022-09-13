/*
 * biblioteca.c
 *
 *  Created on: 13 sep. 2022
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>

int inicializarVector(int lista[], int elemento) {

	for (int i = 0; i < elemento; i++) {
		lista[i] = 0;
	}
	return 0;
}

void pedirVector(int lista[], int elemento) {

	int numero;
	for (int i = 0; i < elemento; i++) {

		printf("\n Ingrese un número: ");
		fflush(stdin);
		scanf("%d", &numero);
		lista[i] = numero;

	}

}


void numeroMayor(int lista[],int elemento,int* mayor){

	int bandera = 1;

	for (int i = 0; i < elemento; i++) {
		if (bandera == 1 || lista[i] > *mayor) {
			bandera = 0;
			*mayor = lista[i];
		}
	}
}
