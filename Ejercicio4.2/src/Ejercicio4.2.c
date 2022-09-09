/*
 ============================================================================
Ejercicio 4-2: Realizar una función Suma que reciba como parámetros dos enteros (los que
va a sumar) y un puntero a entero que guardara el resultado de esta. La función retorna 0 si
pudo realizar la suma y -1 en caso de no haberla podido realizar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
int sumar(int num1, int num2, int* resultado);
int pedirNumero();

int main(void) {
	setbuf(stdout,NULL);

	int numero1 = pedirNumero();
	int numero2 = pedirNumero();
	int total;

	if(!sumar(numero1,numero2, &total)){
		printf("El resultado es: %d", total);
	}
}
