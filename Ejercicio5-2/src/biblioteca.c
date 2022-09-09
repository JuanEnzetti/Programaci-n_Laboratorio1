/*
 * biblioteca.c
 *
 *  Created on: 8 sep. 2022
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>


int arrayListas(int lista[], int elemento){
	int i;
	int retorno = -1;
	if(lista != NULL && elemento >0){

		for(i=0;i<elemento;i++){
			lista[i] = 0;
		}
		retorno = 0;
	}


	return retorno;

}

int calcularPromedio(int listas[], int elemento, float *promedio){

	int retorno;
	int i;
	int acumulador = 0;
	if(listas != NULL && elemento >0 && promedio != NULL){
		retorno = 0;
		for(i = 0; i< elemento;i++){
			acumulador += listas[i];
		}
		*promedio = acumulador/elemento;
	}

	return *promedio;
}
