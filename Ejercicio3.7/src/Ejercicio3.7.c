/*
 ============================================================================
Ejercicio 3-7: Realizar un programa que:
asigne a las variables numero1 y numero2 los valores solicitados al usuario *
valide los mismos entre 10 y 100 *
asigne a la variable operacion el valor solicitado al usuario,
valide el mismo 's'-sumar y'r'-restar
realice la operación de dichos valores a través de una función.
Mostrar el resultado por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main(void) {
	setbuf(stdout,NULL);

	int numero1;
	int numero2;
	char operacion;
	int suma;
	int resta;

	numero1 = pedirNumero();
	numero1 = validar(numero1);

	numero2 = pedirNumero();
	numero2 = validar(numero2);

	operacion = pedirLetra();

	operacion = validarOperacion(operacion);

	if(operacion == 's')
	{
		suma = sumar(numero1, numero2);
		printf("El resultado es: %d",suma);
	}
	else
	{
		resta = restar(numero1, numero2);
		printf("El resultado es: %d",resta);
	}

	return 0;
}
