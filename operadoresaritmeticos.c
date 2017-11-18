#include <stdio.h>

int main(){
	int a;
	int b;
	int resultado1;
	int resultado2;
	int resultado3;
	int resultado4;

	printf("Ingresa el primer valor\n");
	scanf("%d",&a);
	printf("Ingresa el segundo valor\n");
	scanf("%d",&b);
	resultado1 = a + b;
	resultado2 = a - b;
	resultado3 = a / b;
	resultado4 = a * b;

	printf("La suma es %d\n",resultado1);
	printf("La resta es %d\n",resultado2);
	printf("La division es %d\n",resultado3);
	printf("La multiplicacion es %d\n",resultado4);
	return 0;
}