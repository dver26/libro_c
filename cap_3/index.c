#include <stdio.h>
#include <string.h>

// Definiciones de substitución
#define MEN -30
#define MAY 100
#define INC 6

// Declaraciones de funciones
void farenheit();
float conversion(int g);

int main(void)
{
	int opc, r = 0;
	printf("11\t\t Farenheit\n");
	printf("Que ejercicio quieres ejecutar?: ");
	r = scanf_s("%d", &opc);
	if (r == 1)
	{
		switch (opc)
		{
		case 11:
			farenheit();
			break;
		}
	}
	else
	{
		printf("Escribe un n%cmero porfavor\n", 163);
	}
}

float conversion(int gc)
{
	return (float)9 / (float)5 * gc + 32;
}

void farenheit()
{
	for (int t = MEN; t <= MAY; t += INC)
	{
		printf("%1d C\t\t%10.2f F\n", t, conversion(t));
	} 
}