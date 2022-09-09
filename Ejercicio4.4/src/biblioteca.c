/*
 * biblioteca.c
 *
 *  Created on: 8 sep. 2022
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero() {
	int numero;
	printf("\nIngrese un número:\n ");
	fflush(stdin);
	scanf("%d", &numero);

	return numero;

}

void mostrarOpciones() {
	printf("1. Loguearse\n");
	printf("2. Comprar \n");
	printf("3. Ver mis compras\n");
	printf("4. Vender\n");
	printf("5. Salir\n");
	fflush(stdin);
}

void mostrarMensaje() {
	printf(" 1. Vender\n 2. Hacer factura\n 3.Volver atrás.");
}

int loguear(int *bandera1) {
	printf("Usted se a logueado con exito\n");
	fflush(stdin);
	*bandera1 = 0;
	return 0;
}

int comprar(int *bandera1, int *bandera2) {
	if (*bandera1 == 1) {
		printf("Primero debe loguearse\n");
		fflush(stdin);

	} else {
		printf("Compra realizada\n");
		fflush(stdin);
		*bandera2 = 0;
	}

	return 0;
}

int verCompras(int *bandera1, int *bandera2) {
	if (*bandera1 == 1) {
		printf("Primero debe loguearse\n");
		fflush(stdin);
	} else if (*bandera2 == 1) {
		printf("Primero debe comprar\n");
		fflush(stdin);
	} else {
		printf("Estas son sus compras\n");
		fflush(stdin);

	}

	return 0;
}

int vender(int *bandera1, int *bandera2, int *opcionVerMenu) {

	if (*bandera1 == 1) {
		printf("Primero debe loguearse\n");
		fflush(stdin);
	}
		if(*bandera2 == 1) {
		printf("Primero debe comprar\n");
		fflush(stdin);

	}

	return 0;
}

int mostrarMenuDeCompras(int *bandera2, int *opcionVerMenu){
	int retorno = 1;
	while (*opcionVerMenu != 3) {
				switch (*opcionVerMenu) {
				case 1:
					printf("Acaba de vender\n");
					fflush(stdin);
					*bandera2 = 1;
					*opcionVerMenu = 3;
					return retorno;
					break;
				case 2:
					printf("Hizo una factura\n");
					fflush(stdin);
					*opcionVerMenu = 3;
					return 0;
					break;
				case 3:
					printf("Volvemos al menú principal\n");
					return 0;
					break;
				default:
					printf("Opción incorrecta!!!\n");
					fflush(stdin);
					break;

		}//

	}//

}





