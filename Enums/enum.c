/*************ENUMS*************/
// enum.c

#include <stdio.h>

enum colores
{
	azul, amarillo, rojo, verde, blanco, negro
};

int main(void)
{
	enum colores color;

	// Leemos el valor introducido
	printf("Color (en numero): ");
	scanf_s("%d", &color);

	// Visualizamos el color introducido
	printf("%d\n", color);


	if (color == verde) printf("esperanza\n");
	else printf("No es el color de la esperanza\n");
}