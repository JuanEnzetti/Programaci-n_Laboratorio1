/*
 ============================================================================
 Ejercicio 5-2:
 Hacer una función que calcule el promedio de los valores del Array que recibe
 y me devuelva el promedio.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define TAM 5

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int retorno;
	int listaNumeros[TAM];
	int i;
	float promedio;

	if (arrayListas(listaNumeros, TAM) == 0) {

		for(i = 0; i<TAM;i++){
			printf("Agregar el número: ");
			scanf("%d",&numero);
			listaNumeros[i] = numero;
		}

	}

	retorno = calcularPromedio(listaNumeros,TAM,&promedio);
	printf("El promedio es %d", retorno);

}
