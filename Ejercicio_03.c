#include <stdio.h>
#include <string.h>

void strings(char[] ,char[]);

int main () {
	char cad1[20], cad2[20];
	printf("Introduzca la primera cadena ----> ");
	fgets(cad1, 20, stdin);
	cad1[strlen(cad1) - 1] = '\0';
	printf("Introduzca la segunda cadena ----> ");
	fflush(stdin);
	fgets(cad2, 20, stdin);
	cad2[strlen(cad2) - 1] = '\0';
	strings(cad1,cad2);
	return 0;
}

void strings (char str1[20], char str2[20]) {
	char strinv[20], straux[20];
	strcpy(straux,str1);
	strcat(straux,str2);
	strrev(straux);
	str1[20] = straux[20];
	printf("Esta es la String resultante: %s",straux);
}
