#include <stdio.h>
/* Simétrico.
El programa, al recibir como dato un arreglo bidimensional cuadrado, determina
si el mismo es simétrico. */ 
const int MAX = 100;
void Lectura(int [][MAX], int); /* Prototipos de funciones. */
int Simetrico(int [][MAX], int);
void main(void)
{
int MAT[MAX][MAX], N, RES;
do
{
printf("Ingrese el tamaño del arreglo: ");
scanf("%d", &N);
}
while (N > MAX case 3: SUM3 += A[I][J][P-1];
break;
}
if (SUM1 > SUM2)
if (SUM1 > SUM3)
{
printf("\n\nDepartamento con mayores ventas en el último año: Hilos”);
printf(" Ventas:%.2f”, SUM1);
}
else
{
printf("\n\nDepartamento con mayores ventas en el último año: Licra");
printf("" Ventas:%.2f", SUM3);
}
else
if (SUM2 > SUM3)
{
printf("\n\nDepartamento con mayores ventas en el último año: Lanas");
printf(" Ventas:%.2f", SUM2);
}
else
{
printf("\n\nDepartamento con mayores ventas en el último año: Licra");
printf(" Ventas:%.2f", SUM3);
}
}
void Funcion3(float A[][DEP][AÑO],int F, int C, int P)
/* Esta función se utiliza para obtener el departamento, mes y año con la mayor
➥venta. Escribe también el monto de las ventas. */
{
int K, I, J, DE, ME, AN;
float VEN = -1.0;
for (K=0; K<P; K++)
for (I=0; I< F; I++)
for (J=0; J<C; J++)
if (A[I][J][K] > VEN)
{
VEN = A[I][J][K];
DE = J;
ME = I;
AN = K;
}
printf("\n\nDepartamento: %d\tMes: %d\tAño: %d", DE+1, ME+1, AN+1);
printf("\tVentas: %.2f”, VEN);
}
 N < 1); /* Se verifica que el tamaño del arreglo sea
válido. */
Lectura (MAT, N);
RES = Simetrico(MAT, N);
if (RES)
printf("\nEl arreglo bidimensional es simétrico");
else
printf("\nEl arreglo bidimensional no es simétrico");
}
void Lectura(int A[][MAX], int T)
/* La función Lectura se utiliza para leer un arreglo bidimensional cuadrado de
tipo entero de T filas y T columnas. */
{
int I, J;
for (I=0; I<T; I++)
for (J=0; J<T; J++)
{
printf("Fila: %d\tColumna: %d", I+1, J+1);
scanf("%d", &A[I][J]);
}
}
int Simetrico (int A[][MAX], int T)
/* La función Simétrico se utiliza para determinar si el arreglo bidimensional
➥cuadrado es simétrico. Si es simétrico regresa 1, en caso contrario, 0.
➥Observa que en el segundo ciclo solamente se recorre la matriz triangular
➥inferior, sin la diagonal principal. */ 
{
int I = 0, J, F = 1;
while ((I < T) && F)
{
J = 0;
while ((J < I) && F)
if (A[I][J] == A[J][I])
J++;
else
F = 0;
I++;
}
return (F);
}
