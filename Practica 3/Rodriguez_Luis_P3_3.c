/*
Cree un programa llamado Apellido_Nombre_P3_3.c el cual permita al usuario capturar una 
cadena de caracteres. El programa debe mostrar un mensaje si la cadena ingresada esta 
capitalizada(si comienza con una letra mayúscula) o no.
*/

#include <stdio.h>

int main(void)
{
    char mensaje[40];

    printf("\nIntroduce un mensaje no mayor a 40 caracteres: ");
    scanf("%c", mensaje);

    if(mensaje[0] < 97)
    {
        printf("%c esta capitalizada", mensaje[0]);
    }
    else
    {
        printf("%c no esta capitalizada", mensaje[0]);
    }
}