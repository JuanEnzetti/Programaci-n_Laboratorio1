/*
 ============================================================================
Ejercicio 5-4: Pedir 10 números entre -100 y 100, guardarlos en un Array. Determinar:
a) Cantidad de negativos.*
b) Sumatoria de los impares.
c) El mayor de los pares.
d) Listado de los números ingresados.
e) Listado de los números mayores a 15.
f) Listado de los números de las posiciones impares.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define TAM 10

int main(void) {
	setbuf(stdout, NULL);
	int listaNumerosEnteros[TAM];
	int mayor;
	int suma;

	if (inicializarVector(listaNumerosEnteros, TAM) == 0) {
		pedirVector(listaNumerosEnteros, TAM);
		cantidadNegativos(listaNumerosEnteros, TAM);
		sumarImapares(listaNumerosEnteros, TAM, suma);
		mayorImpar(listaNumerosEnteros, TAM, &mayor);
		listaNumerosMayores(listaNumerosEnteros,TAM);
		listadoNumerosImpares(listaNumerosEnteros, TAM);

	}

}
