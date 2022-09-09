/*
 * restas.c
 *
 *  Created on: 1 sep. 2022
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>

int restar1(int num1, int num2){

	int restar;
	restar = num1 - num2;

	return restar;

}

int Restar2(){

	int num1;
	int num2;
	int resta;

	printf("Ingrese un número: ");
	scanf("%d",&num1);

	printf("Ingrese un número: ");
	scanf("%d",&num2);

	resta = num1-num2;

	return resta;
}

void Restar3(int num1, int num2){

	int resta;
	resta = num1 - num2;
	printf("El resultado va a ser: %d",resta);



}

void Restar4(){

	int numero1;
	int numero2;
	int resultado;

	printf("Ingrese un numero: ");
	scanf("%d",&numero1);

	printf("Ingrese un numero: ");
	scanf("%d",&numero2);

	resultado = numero1 - numero2;

	printf("El resultado es: %d ",resultado);

}



