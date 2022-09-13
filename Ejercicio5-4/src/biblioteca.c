/*
a) Cantidad de negativos*
b) Sumatoria de los impares*
c) El mayor de los pares.*
d) Listado de los números ingresados*
e) Listado de los números mayores a 15.*
f) Listado de los números de las posiciones impares.
 */
#include <stdio.h>
#include <stdlib.h>

int inicializarVector(int lista[], int elemento) {


	for (int i = 0; i < elemento; i++) {
		lista[i] = 0;
	}
	return 0;
}

void pedirVector(int lista[], int elemento) {


	int numero;
	int i;
	for (i = 0; i < elemento; i++) {

		printf("\n Ingrese un número: ");
		fflush(stdin);
		scanf("%d", &numero);
		lista[i] = numero;

	}

	for(i = 0; i < elemento; i++){
	printf("\n En la posición %d esta el número %d \n",i,lista[i]);

	}

}

void cantidadNegativos(int lista[], int elemento) {

	int contadorNegativo = 0;
	for (int i = 0; i < elemento; i++) {
		if (lista[i] < 0) {
			contadorNegativo++;
		}
	}
	printf("\n La cantidad de negativos es de %d \n",contadorNegativo);

}

void sumarImapares(int lista[], int elemento, int suma){

	int acumuladorImpares = 0;

	for(int i = 0;i<elemento;i++){
		if(lista[i] %2!=0){
			acumuladorImpares+=lista[i];

		}
	}

	printf("\n La suma de impares es de: %d\n",acumuladorImpares);

}

void mayorImpar(int lista[], int elemento, int *mayor){

	int bandera = 1;

	for (int i = 0; i < elemento; i++) {
		if(lista[i] %2==0){
			if (bandera == 1 || lista[i] > *mayor) {
				bandera = 0;
				*mayor = lista[i];
			}
		}
	}
	printf("El numero mayor de los pares es: %d", *mayor);

}

void listaNumerosMayores(int lista[], int elemento){
	int i;
	for(i = 0; i<elemento;i++){
		if(lista[i] > 15){
			printf("En la posición %d es mayor a 15",lista[i]);
		}
	}
}

void listadoNumerosImpares(int lista[], int elemento){

	int i;
	for(i = 0; i<elemento;i++){
		if(lista[i] %2!=0){
			printf("\n En la lista %d es impar \n",lista[i]);
		}
	}
}

