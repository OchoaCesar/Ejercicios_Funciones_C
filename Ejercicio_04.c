#include <stdio.h>
#include <math.h>

void raices(float, float, float);

int main() {
	float a, b, c; 
	do {
	printf("Introduzca el valor perteneciente a A = ");
	scanf("%f",&a);
	printf("Introduzca el valor perteneciente a B = ");
	scanf("%f",&b);
	printf("Introduzca el valor perteneciente a C = ");
	scanf("%f",&c);
	if (4*a*c >= b*b) {
		printf("Las raices reales de la expresion ingresada (%f) x^2 + (%f) x + %f no existen.\n",a,b,c);
		} 
	} while (4*a*c >= b*b);
	raices(a, b, c);
	return 0;
}

void raices(float vA, float vB, float vC) {
	float rpos, rneg, raux;
	raux = (sqrt(vB*vB-4*vA*vC));
	rpos = -(-vB + raux) / 2*vA;
	rneg = -(-vB - raux) / 2*vA;
	printf("\nLas raices reales de la expresion ingresada (%f) x^2 + (%f) x + %f son: \n",vA,vB,vC);
	printf("\n%f y %f\n",rpos,rneg);
}
