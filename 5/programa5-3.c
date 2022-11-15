#include <stdio.h>
/* Apuntadores, variables y valores. */
void main(void)
{
#include <stdio.h>
/* Apuntadores, variables y valores. */
void main(void)
{
IX = IX + 4; /* IX se modifica. Observa que el apuntador se mueve
➥4 posiciones y cae en una dirección afuera del arreglo. Esto ocasionará un
➥error. */ Y = *IX; /* Y se modifica, toma el valor (basura) de una celda
➥incorrecta. Es un error que no señala el compilador del lenguaje C. */
printf("\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d
➥\t Z[4] = 
%d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
IX = &X; /* IX apunta a la variable entera X. */
IX = IX + 1; /* IX se mueve una posición y cae en una celda incorrecta. */
X = *IX; /* X toma el valor (basura) de la celda a la que apunta IX.*/
printf("\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d
➥\t Z[4] = 
%d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
}