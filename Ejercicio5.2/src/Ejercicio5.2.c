/*
 ============================================================================
Arrays: Carga aleatoria
En este caso se necesitan ingresar 2 valores,
la posición donde se quiere ingresar el dato y el dato.
Puede que no se quieran cargar todos los elementos del Array,
por eso conviene INICIALIZARLO. (Clase5_Ej2)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 2
int inicializarArray(int array[], int elemento);

int main(void) {
	setbuf(stdout,NULL);

	int i;
	int listaCargarNumero[TAM];
	int posicion;
	int numero;
	char respuesta;


	if(inicializarArray(listaCargarNumero,TAM) == 0){

		while(respuesta !='s'){
			printf("Ingrese una posicion");
			fflush(stdin);
			scanf("%d",&posicion);

			printf("Ingrese un numero");
			fflush(stdin);
			scanf("%d",&numero);
			listaCargarNumero[posicion] = numero;

			printf("¿Quiere salir?");
			fflush(stdin);
			scanf("%c", &respuesta);
		}
	}

	for(i=0;i<TAM;i++){
		printf("La posición es %d y su número es %d",i,listaCargarNumero[i]);
	}







}


int inicializarArray(int array[], int elemento){
	int retorno;
	int i;
	if(array!= NULL && elemento>0)
	{
		for(i=0;i<elemento;i++){
			array[i]=0;
		}
	}
	retorno =0;
	return retorno;

}
