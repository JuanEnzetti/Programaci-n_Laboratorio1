/*
 * calculos.c
 *
 *  Created on: 1 sep. 2022
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>

int sumar(int num1, int num2, int* resultado){
	int retorno = -1;
	*resultado = num1 + num2;
	retorno = 0;

	return retorno;
}

int pedirNumero(){
	int numero;
	printf("\nIngrese un número: ");
	scanf("%d",&numero);

	return numero;
}
