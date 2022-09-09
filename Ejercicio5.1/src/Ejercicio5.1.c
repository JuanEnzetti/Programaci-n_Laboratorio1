/*
 ============================================================================
Arrays: Carga secuencial
Ejercicio:
De los 10 empleados de una fábrica se registra:
-número de legajo (coincidente con el índice)
-edad
-sueldo
Se pide ingresar los datos consecutivamente y
calcular el sueldo promedio. (Clase5-Ej1.c)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int i;
	int listaEdad[10];
	float listaSueldo[10];
	float acumuladorSueldo;
	float total;


	for(i=0; i<10; i++){
		printf("\nIngrese la edad ");
		scanf("%d",&listaEdad[i]);

		printf("\nIngrese el sueldo ");
		scanf("%f",&listaSueldo[i]);

		acumuladorSueldo = acumuladorSueldo + listaSueldo[i];

	}

	for(i=0; i<10;i++){
		printf("El legajo es %d , la edad es %d y su sueldo es %2.f ",i, listaEdad[i],listaSueldo[i]);
	}

	total = acumuladorSueldo / 10;
	printf("\nEl promedio es: %2.f", total);

}
