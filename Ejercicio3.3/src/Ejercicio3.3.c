/*
 ============================================================================
Ejercicio 3-3: Crear una función que permita determinar si un número es par o no.
La función retorna 1 en caso afirmativo
y 0 en caso contrario.
Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int parImpar();

int main(void) {
	setbuf(stdout,NULL);
	int resultado;


	resultado = parImpar();

	printf("El resultado es: %d",resultado);

}

int parImpar(){
	int numero;

	printf("Ingrese un numero: ");
	scanf("%d",&numero);

	if(numero %2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
