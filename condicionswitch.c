#include <stdio.h>

int main()
{
	int casos;
	printf("Inserte numeros de casos\n");
	scanf("%i",&casos);
	switch(casos){
		case 1:
			printf("Elegistes el primer caso\n");
			break;
		case 2:
			printf("Elegistes el segundo caso\n");
			break;

		default:
			printf("No existe el caso\n");
			break;
	}

	return 0;
}