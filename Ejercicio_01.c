#include <stdio.h>
int num1, num2;

int sumatoria (int,int);

int main() {
	printf("Introduzca el primer numero a sumar ----> ");
	scanf("%d",&num1);
	printf("\nIntroduzca el segundo numero a sumar ----> ");
	scanf("%d",&num2);
	printf("\nEste es el resultado: %d",sumatoria(num1,num2));
	return 0;
}

int sumatoria (int x, int y) {
	return (x + y);
}
