/*
 ============================================================================
Especializar la función del punto 3.1 y 3.2 para que valide el número en
un rango determinado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float ingresar();

int main(void) {
	setbuf(stdout,NULL);
	float resultado;

	resultado = ingresar();
	while(resultado < 10){
		printf("Error! Ingrese el número");
		resultado = ingresar();
	}
}

float ingresar(){

	float num1;

	printf("Ingrese un número: ");
	scanf("%f",&num1);

	return num1;
}
