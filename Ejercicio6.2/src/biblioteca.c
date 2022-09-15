/*
 * biblioteca.c
 *
 *  Created on: 14 sep. 2022
 *      Author: usuario
 */

#include <stdio.h>
#include <stdlib.h>

int inicializarVector(int lista[], int elemento) {
	for (int i = 0; i < elemento; i++) {
		lista[i] = 0;
	}
	return 0;
}

void ordenarVectorPositivo(int lista[], int elemento, int aux) {
	int i;
	int j;
	for (i = 0; i < elemento - 1; i++) {
		for (j = i + 1; j < elemento; j++) {
			if (lista[i] > lista[j]) {
				aux = lista[i];
				lista[i] = lista[j];
				lista[j] = aux;
			}
		}
	}
}

void ordenarVectorNegativo(int lista[], int elemento, int aux) {
	int i;
	int j;
	for (i = 0; i < elemento - 1; i++) {
		for (j = i + 1; j < elemento; j++) {
			if (lista[i] < lista[j]) {
				aux = lista[i];
				lista[i] = lista[j];
				lista[j] = aux;
			}
		}
	}
}

void vectorOrdenado(int lista[], int elemento){
    int i;
	for(i=0;i<elemento;i++)
    {
 	   printf("\n En la posición %d, su elemento es %d",i,lista[i]);
    }
}
