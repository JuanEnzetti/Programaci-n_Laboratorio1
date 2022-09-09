/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int opcionVerMenu;
	int bandera1 = 1;
	int bandera2 = 1;
	int retorno;
	int retorno2;
	int retorno3;
	int retorno4;
	int retorno5;

	while (opcion != 5) {

		mostrarOpciones();
		opcion = pedirNumero();

		switch(opcion){

		case 1:
			retorno = loguear(&bandera1);
			break;

		case 2:
			retorno2 = comprar(&bandera1,&bandera2);
			break;
		case 3:
			retorno3 =verCompras(&bandera1,&bandera2);
			break;
		case 4:
			mostrarMensaje();

			retorno4 = vender(&bandera1,&bandera2,&opcionVerMenu);
			opcionVerMenu = pedirNumero();
			if(retorno == 0){
				retorno5 = mostrarMenuDeCompras(&bandera2,&opcionVerMenu);
				if(retorno5 == 1){
					bandera2 = 1;
				}
			}
			break;
		case 5:
			printf("Adios!");
			break;
		default:
			printf("Error!");

		}
	}



}
