/*
Cree un programa llamado Apellido_Nombre_P3_2.c el cual solicite la entrada de 4 números 
y despliegue cuál número es el menor y cuál es el mayor.
*/

#include <stdio.h>

int main(void)
{
    float num1, num2, num3, num4, max1, min1, max2, min2;

    printf("\nIntroduce 4 numeros separados por un espacio: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    if (num1 > num2)
    {
        max1 = num1;
        min1 = num2;
    }
    else
    {
        max1 = num2;
        min1 = num1;
    }
    if (num3 > num4)
    {
        max2 = num3;
        min2 = num4;
    }
    else
    {
        max2 = num4;
        min2 = num3;
    }
    if (max1 > max2)
    {
        printf("\nEl numero mas grande es %.1f", max1);
    }
    else
    {
        printf("\nEl numero mas grande es %.1f", max2);
    }
    if(min1 < min2)
    {
        printf("\nEl numero mas chico es %.1f", min1);
    }
    else
    {
        printf("\nEl numero mas chico es %.1f", min2); 
    }
    return 0;
}