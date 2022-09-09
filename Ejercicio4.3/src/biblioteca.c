/*
 * biblioteca.c
 *
 *  Created on: 3 sep. 2022
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>

char pedirLetra(){

	char letra;
	printf("\nIngrese Celsius o Fahrenheit (c o f): ");
	scanf("%c",&letra);

	return letra;

}

int pedirNumero(){

	int numero;
	printf("\nIngrese un número: ");
	scanf("%d",&numero);

	return numero;
}

char validar(char operacion){


	while(operacion != 'c' && operacion != 'f'){
		printf("\nError! Ingrese Celsius o Fahrenheit (c o f): ");
		scanf("%c",&operacion);
	}

	return operacion;

}

int convertirC(int numero){

	int total;
	total = ( numero * 1.8) + 32;

	return total;

}

int convertirF(int numero){

	int total;

	total = (numero -32) / 1.8;

	return total;

}

int validarC(int numero){

	while(numero < 0 || numero > 100){
		printf("\nError! Ingrese un numero entre 0 a 100: ");
		scanf("%d",&numero);
	}

	return numero;
}

int validarF(int numero){

	while(numero < 32 || numero > 220){
		printf("\nError! Ingrese un numero entre 32 a 220: ");
		scanf("%d",&numero);
	}

	return numero;
}

