#include <stdio.h>

float num, cantidad, valor;

float media (float, float);

int main()
{
	do 
	{
		printf("Introduzca un numero. Si desea dejar de introducir numeros, introduzca 0. No se guardaran los numeros negativos.\n");
		scanf ("%f",&num);
		if (num>0) 
		{
			valor+=num;
			cantidad+=1;
		} 
		else if (num<0) 
		{
			printf("Introduzca solo cantidades positivas.\n");
		}
		else 
		{
			printf("Lectura de numeros finalizada.\n");
		}
	} while (num != 0);
	printf("La media de numeros introducidos es: %f",media(valor,cantidad));
}

float media (float x, float y) {
	return (x / y);
}
