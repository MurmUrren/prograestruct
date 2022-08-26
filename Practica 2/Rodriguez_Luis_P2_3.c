/*
Cree un programa llamado Apellido_Nombre_P2_3.c que solicite un número que representa 
el radio de una esfera. El programa debe calcular e imprimir el volumen de dicha esfera.
*/

#define PI 3.1416

#include <stdio.h>

int main(void)
{
    float radio = 0.0f;

    printf("\nIntroduce el radio de la esfera: ");
    scanf("%f", &radio);

    printf("\nEl volumen de la esfera es: %.2f\n", ((4 * PI * (radio * radio * radio)) / 3));

    return 0;
}

