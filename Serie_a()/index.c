#include <stdio.h>
#define N 10

void ex1(), ex2(), ex3(), exfibonacci(), exfibonaccimtr();

int main(void)
{
	int opc;
	printf("Que ejercicio quieres probar?: ");
	scanf_s("%d", &opc);

	switch (opc)
	{
	case 1:
		ex1();
		break;
	case 2:
		ex2();
		break;
	case 3:
		ex3();
		break;
	case 9:
		exfibonacci();
		break;
	case 10:
		exfibonaccimtr();
		break;
	}
}   

void ex1() 
{
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

void ex2() 
{
	char o = 162;
	printf("Los programas escritos en C\nson portables en c%cdigo fuente\n", o);
}

void ex3()
{
	enum vehiculos
	{
		tesla, lambo, bugatti, porsche
	} coche = tesla;

	if (coche == 0)
	{
		printf("%d", coche);
	}
	else 
	{
		printf("no es equivalente");
	}
}

void exfibonacci()
{
	int ero = 0, ndo = 1, res;
	printf("%d %d ", ero, ndo);

	for (int i = 2; i < N; i++)
	{
		res = ero + ndo;
		printf("%d ", res);
		ero = ndo;
		ndo = res;
	}
}

void exfibonaccimtr()
{
	int m[N];
	m[0] = 0;
	m[1] = 1;

	printf("%d %d ", m[0], m[1]);

	for (int i = 2; i < 10; i++)
	{
		m[i] = m[i - 2] + m[i - 1];
		printf("%d ", m[i]);
	}
}