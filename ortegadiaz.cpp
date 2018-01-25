// Jessica Ortega Diaz	
// Invertir cadenas

#include "stdafx.h"
#include <stdio.h>


int main() {
	int i, j;
	char a[64];
	printf("Inserta un texto de menos de 64 caracteres amiguito\n");

	for (i = 0; (a[i] = getchar()) != '\n'; i++);

	for (j = i; j >= 0; j--)
		printf("%c", a[j]);

	getchar();
	return 0;
}