// Directiva buscada en los encabezados de la libreria estandar
#include <stdio.h>

//Diractiva buscada dentro de nuestra carpeta
// #include "directiva.h"

// Constante
#define PI 3.1415

// Macros
#define Cubo(a) a*a*a

int main()
{
	int suma;
	int resultado;

	resultado = suma * PI;
	printf("%i\n", resultado);

	/*
	int a = 4;
	printf("El resultado es /n", Cubo(a));
	*/
	return 0;
}