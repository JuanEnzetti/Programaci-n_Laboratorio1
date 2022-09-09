/*
 * array.c
 *
 *  Created on: 8 sep. 2022
 *      Author: Usuario
 */


int arrayListas(int lista[], int elemento){
	int i;
	int retorno = -1;

	for(i=0;i<elemento;i++){
		lista[i] = 0;
	}
	retorno = 0;
	return retorno;

}

int pedirNumero(){
	int numero;
	printf("\nIngrese un número: ");
	scanf("%d",&numero);

	return numero;
}


