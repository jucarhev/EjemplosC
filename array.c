#include <stdio.h>

int main()
{
	int arreglo1[4];
	int arreglo2[4] = {4,5,6,7};
	
	int size;

	printf("Tamaño del arreglo\n");
	scanf("%i\n",&size);

	int age[size];
	for (int i = 0; i < size; ++i)
	{
		printf("Datos %i\n", i+1);
		scanf("%i\n",&age[i]);
	}

	for (int e = 0; e < size; ++e)
	{
		printf("%i\n", age[e]);
	}
	return 0;
}