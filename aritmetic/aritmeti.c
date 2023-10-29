/********************Operaciones aritméticas********************/
// aritmeti.c

#include <stdio.h>

int main(void)
{
	int dato1 = 20, dato2 = 10, resultado;

	// Suma
	resultado = dato1 + dato2;
	printf("%d + %d = %d\n", dato1, dato2, resultado);

	// Resta 
	resultado = dato1 - dato2;
	printf("%d - %d = %d\n", dato1, dato2, resultado);

	// Multiplicación
	resultado = dato1 * dato2;
	printf("%d * %d = %d\n", dato1, dato2, resultado);

	// División
	printf("%d / %d = %d\n", dato1, dato2, dato1 + dato2);
}