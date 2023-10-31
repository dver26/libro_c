/********************Operaciones aritméticas********************/
// aritmeti.c

#include <stdio.h>

int main(void)
{
	int dato1, dato2, dato3, resultado;

	printf("Valor del primer numero: ");
	scanf_s("%d", &dato1);

	printf("Valor del segundo numero: ");
	scanf_s("%d", &dato2);

	printf("Valor del tercer numero: ");
	scanf_s("%d", &dato3);

	// Suma
	resultado = dato1 + dato2 + dato3;
	printf("%d + %d + %d = %d\n", dato1, dato2, dato3, resultado);

	// Resta 
	resultado = dato1 - dato2 - dato3;
	printf("%d - %d - %d = %d\n", dato1, dato2, dato3, resultado);

	// Multiplicación
	resultado = dato1 * dato2 * dato3;
	printf("%d * %d * %d = %d\n", dato1, dato2, dato3, resultado);

	// División
	resultado = (dato1 / dato2) / dato3;
	printf("%d / %d / %d = %d\n", dato1, dato2, dato3, resultado);
}