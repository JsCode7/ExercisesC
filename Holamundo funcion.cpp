/* Inclusi�n de archivos */
#include <stdio.h>

void holamundo(void) /* Funci�n donde se ejecuta la l�gica del programa */
{
 	printf("Hola Mundo\n"); /* imprime la cadena */
	return; /* sale de la funci�n */
}
 
int main(void) /* Funci�n principal del programa */
{
	holamundo(); /* llamada a la funci�n holamundo */
	return 0; /* sale del programa con c�digo 0 (correcto) */
}
