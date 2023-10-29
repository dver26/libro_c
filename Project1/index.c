/*********************SALUDO**********************/
// saludo.c

#include <stdio.h>

int main(void)
{
	int s, n;
	printf("escribe un numero: ");
	s = scanf_s("%d", &n);
	if (s == 1)
	{
		printf("leído correctamente");
	}
	else
	{
		printf("no se ha podido leer correctamente");
	}
}