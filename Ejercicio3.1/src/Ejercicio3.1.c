/*
 ============================================================================
Ejercicio 3-1: Crear una función que muestre por pantalla el número entero que
recibe como parámetro.

//Mostrar o recibe = void (Vacio)
//Devuelve = int
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void recibir(int);

int main(void) {
	setbuf(stdout,NULL);

	int numero1;
	printf("Ingrese un numero: ");
	scanf("%d",&numero1);

	recibir(numero1);

}

void recibir(int num1){
	printf("Muestro un numero: %d ",num1);
}

