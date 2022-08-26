/*
Crear un programa .c llamado Apellido_Nombre_P1_2.c que realice lo siguiente:
a. El programa solicita la captura de 5 calificaciones e imprime en pantalla el promedio 
de dichas calificaciones.
*/

#include <stdio.h>

int main(void)
{
    float calif1, calif2, calif3, calif4,
    calif5, sumaCalif, promedio; //se declara las variables de calificaciones y promedio

    printf("\nIntroduce las 5 calificaciones separadas por un espacio (ejemplo 8 6 7 10 9): ");
    scanf("%f %f %f %f %f", &calif1, &calif2, &calif3, &calif4, &calif5);

    sumaCalif = calif1 + calif2 + calif3 + calif4 + calif5; //suma las calificaciones
    promedio = sumaCalif / 5; //realiza el promedio

    printf("El promedio es: %.2f\n", promedio);

    return 0;
}