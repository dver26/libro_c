#include <stdio.h>
#define N 10

void ex1(), ex2();

int main(void)
{
	int opc;
	printf("Que ejercicio quieres probar?: ");
	scanf_s("%d", &opc);

	switch (opc)
	{
	case 1:
		ex1();
	case 2:
		ex2();
	}
}   

void ex1() {
	int a[N];

	a[0] = 1;

	for (int i = 1; i <= 9; i++)
	{
		a[i] = a[i - 1] + 2;
	}

	for (int i = 0; i <= 9; i++)
	{
		printf("a(%d) = %d\n", i, a[i]);
	}
}

void ex2() {
	char o = 162;
	printf("Los programas escritos en C\nson portables en c%cdigo fuente\n", o);
}