/*
 ============================================================================
Pedir al usuario que ingrese 5 números y los guardamos
en las posiciones del array.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
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
