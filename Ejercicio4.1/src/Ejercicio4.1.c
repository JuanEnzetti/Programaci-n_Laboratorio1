/*
 ============================================================================
Ejercicio 4-1: Realizar un programa en el MAIN que permita calcular y mostrar el factorial de
un número.
Utilizar la función de PedirNumero de la ejercitación 3.
Por ejemplo:
5! = 5*4*3*2*1 = 120
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int pedirNumero();
void mostrar(int resultado);

int main(void) {
	setbuf(stdout,NULL);

	int numero;
	int factorial = 1;

	numero = pedirNumero();

	for(int i =1;i<=numero;i++){
	factorial = factorial * i;

	}


	mostrar(factorial);

	return 0;
}

void mostrar(int resultado){
	printf("El resultado es: %d",resultado);
}

int pedirNumero(){
	int numero;
	printf("\nIngrese un número: ");
	scanf("%d",&numero);

	return numero;
}

