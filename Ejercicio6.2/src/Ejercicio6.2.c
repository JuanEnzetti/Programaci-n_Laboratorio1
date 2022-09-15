/*
 ============================================================================
 Ejercicio 6-2:
 Realizar un programa que permita el ingreso de 10 números enteros (positivos y negativos).
 Necesito generar un listado de los números positivos de manera creciente
 y negativos de manera decreciente.
 (Como máximo 5 estructuras repetitivas)
 [Listado 1: 4, 5, 6, 10, 18, 29]
 [Listado 2 : -1,-5,-9,-12]
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int main(void) {

	int listaNumerosPositivos[6] = { 4, 5, 6, 10, 18, 29 };
	int listaNumerosNegativos[4] = {-1, -5, -9, -12};
	int aux;
		ordenarVectorPositivo(listaNumerosPositivos, 6, aux);
		ordenarVectorNegativo(listaNumerosNegativos, 4, aux);
		vectorOrdenado(listaNumerosPositivos, 6);
		vectorOrdenado(listaNumerosNegativos, 4);
}
