/*
 * Juan Cruz Enzetti
 ============================================================================
Ejercicio 3-5: Realizar un programa en donde se puedan utilizar los prototipos
de la función Restar en sus 4 combinaciones.
 int Restar1(int, int);
 int Restar2(void);
 void Restar3(int, int);
 void Restar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "restas.h"

int main(void) {
	setbuf(stdout,NULL);

	/*
	int numero1;
	int numero2;
	int resultado;

	printf("Ingrese un numero: ");
	scanf("%d",&numero1);

	printf("Ingrese un numero: ");
	scanf("%d",&numero2);

	resultado = restar1(numero1,numero2);

	printf("El resultado es: ",resultado);

	*/

/********************************************************************************/

	/*
	int resultado;
	resultado = Restar2();
	printf("El resultado es: %d ",resultado);
	*/


/********************************************************************************/
	/*
	int num1;
	int num2;

	printf("Ingrese un número: ");
	scanf("%d",&num1);

	printf("Ingrese un número: ");
	scanf("%d",&num2);
	Restar3(num1,num2);
	*/

/********************************************************************************/

	Restar4();
	return 0;

}
