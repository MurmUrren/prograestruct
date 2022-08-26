/*
Cree un programa llamado Apellido_Nombre_P2_4.c que calcule la fuerza de atracción 
gravitacional entre dos cuerpos. El programa solicita la masa de dos objetos en kilogramos, 
y la distancia entre ambos cuerpos en metros e imprime la fuerza gravitacional entre ambos 
cuerpos. La ecuación de la ley de gravitación universal de Newton es:
F = G(m1*m2)/(r^2)
Donde G es la constante gravitacional y es igual a 6.67*10^-11
*/

#define G 0.0000000000667 //definir el valor de la constante gravitacional 6.67*10^-11
#include <stdio.h>

int main(void)
{
    double masa1, masa2, dist;

    printf("\nIntroduce las masas de dos objetos en kg, separadas por un espacio: ");
    scanf("%lf %lf", &masa1, &masa2);

    printf("\nIntroduce la distancias que separa ambos objetos en metros: ");
    scanf("%lf", &dist);

    printf("\nLa fuerza gravitacional entre ambos cuerpos es de: %.13lf m/s²\n", (G * (masa1 * masa2)) / (dist * dist));

    return 0;
}