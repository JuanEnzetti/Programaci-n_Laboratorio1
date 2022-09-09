/*
 ============================================================================
Ejercicio 3-2: Crear una función que pida el ingreso de un flotante y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float ingreso();

int main(void) {
	setbuf(stdout,NULL);
	float resultado;

	resultado = ingreso();
	printf("Ingrese un número: %.2f",resultado);


}


float ingreso(){
	float num1;

	printf("Ingrese un número: ");
	scanf("%f",&num1);

	return num1;


}
