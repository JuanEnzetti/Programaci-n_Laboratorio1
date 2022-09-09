/*
 * calculos.c
 *
 *  Created on: 2 sep. 2022
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero(){
	int numero;
	printf("\nIngrese un número: ");
	scanf("%d",&numero);

	return numero;

}

int validar(int numero){

	while(numero<10 || numero >100){
		printf("Error, ingrese el numero: ");
		scanf("%d",&numero);
	}

	return numero;


}


int realizarDescuento(int numero){

	int importeConDescuento;
	int importeTotal;

	importeConDescuento = (numero * 5)/100;
	importeTotal = numero - importeConDescuento;

	return importeTotal;


}
