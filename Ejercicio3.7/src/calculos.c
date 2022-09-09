/*
 * calculos.c
 *
 *  Created on: 1 sep. 2022
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

char pedirLetra(){
	char letra;
	printf("\nIngrese s o r: ");
	scanf("%c",&letra);

	return letra;
}

int validar(int numero){

	while(numero<10 || numero >100){
		printf("Error, ingrese el numero: ");
		scanf("%d",&numero);
	}

	return numero;


}

char validarOperacion(char operacion){

	while(operacion != 's' && operacion != 'r'){
		printf("Error! Coloque s o r para la operacion: ");
		scanf("%c",&operacion);
	}

	return operacion;


}

int restar(int num1, int num2){

	int restar;
	restar = num1 - num2;

	return restar;

}

int sumar(int num1, int num2){
	int suma;
	suma = num1 + num2;

	return suma;
}



