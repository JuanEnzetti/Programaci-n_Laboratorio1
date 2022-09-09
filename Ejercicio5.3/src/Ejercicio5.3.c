/*
 ============================================================================

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int arrayListasEdades(int listaEdad[], int elemento);
float arrayListasSalario(float listaSalario[], float elemento);

int main(void) {
	setbuf(stdout,NULL);

	int i;
	int legajo;
	int edad;
	int listaEdad[TAM];
	float salario;
	float listaSalario[TAM];
	char respuesta = 's';


	//Inicializar en 0
	if(arrayListasEdades(listaEdad,TAM)==0 && arrayListasSalario(listaSalario,TAM)==0)
		{
		do{
			printf("Queres completar el legajo");
			scanf("%d",&legajo);

			printf("Queres completar la edad");
			scanf("%d",&edad);
			listaEdad[legajo] = edad;

			printf("Queres completar el legajo");
			scanf("%f",&salario);
			listaSalario[legajo] = salario;

			printf("¿Desea salir?");
			scanf("%c",&respuesta);
		}while(respuesta == 's');

		}


	for(i=0;i<TAM;i++){
		printf("El número de legajo es %d, su edad es %d y su salario es de %f ",i,listaEdad[i],listaSalario[i]);
	}


}


int arrayListasEdades(int listaEdad[], int elemento){
	int i;
	int retorno = -1;

	for(i=0;i<elemento;i++){
		listaEdad[i] = 0;
	}
	retorno = 0;
	return retorno;

}

float arrayListasSalario(float listaSalario[], float elemento){

	int i;
	int retorno = -1;

	for(i=0;i<elemento;i++){
		listaSalario[i] = 0;
	}
	retorno = 0;
	return retorno;

}
