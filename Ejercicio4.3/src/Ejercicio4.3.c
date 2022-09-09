/*
 ============================================================================
Ejercicio 4-3: Realizar un programa que permita la carga de temperaturas en Celsius y Fahrenheit *
validando las temperaturas ingresadas estén entre el punto de congelación y de ebullición del agua para cada tipo de escala
Las validaciones se hacen en una biblioteca.

Las funciones de conversión de Fahrenheit a Celsius y de Celsius a Fahrenheit se hacen en otra.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void) {
	setbuf(stdout,NULL);

	int temperatura;
	char operacion;
	char conversion;
	int resultado;

	operacion = pedirLetra();
	operacion = validar(operacion);

	if (operacion == 'c'){
		temperatura = pedirNumero();
		temperatura = validarC(temperatura);
	}
	else {
		temperatura = pedirNumero();
		temperatura = validarF(temperatura);
	}

	printf("¿Desea convertir? (Colocar s en caso de que sí, sino colocar cualquier cosa): ");
    fflush(stdin);
	scanf("%c",&conversion);

	if(conversion == 's'){

		if(operacion == 'c'){
			resultado = convertirC(temperatura);
			printf("El resultado es: %d F° ",resultado);
		}
		else
		{
			resultado = convertirF(temperatura);
			printf("El resultado es: %d C° ",resultado);
		}

	}

	else
	{
		printf("El resultado es: %d ",temperatura);
	}

}
