/*
 ============================================================================
Ejercicio 3-6: Realizar un programa que:
asigne a la variable numero1 un valor solicitado al usuario, x
valide el mismo entre 10 y 100,
realice un descuento del 5% a dicho valor a través de una función llamada realizarDescuento().
Mostrar el resultado por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main(void) {
	setbuf(stdout,NULL);
	int numero1;
	int total;

	numero1 = pedirNumero();

	numero1 = validar(numero1);

	total = realizarDescuento(numero1);

	printf("El importe final es: %d ",total);

}
