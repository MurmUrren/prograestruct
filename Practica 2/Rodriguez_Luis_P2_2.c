/*
Cree un programa llamado Apellido_Nombre_P2_2.c que solicite un número que representa 
la cantidad de segundos. El programa debe imprimir a cuantas horas, minutos y segundos 
corresponde la cantidad de segundos ingresada. Por ejemplo, si el usuario ingresa 125, el 
programa debe informar que 125 segundos equivalen a 0 horas, 2 minutos y 5 segundos.
*/

#include <stdio.h>

int main(void)
{
    int segundosI, horas, minutos, segundosR;

    printf("\nIntroduce cuantos segundos han pasado: ");
    scanf("%d", &segundosI);

    segundosR = segundosI;
    horas = segundosR / 3600;
    segundosR = segundosR - (horas * 3600);
    minutos = segundosR / 60;
    segundosR = segundosR - (minutos * 60);
    
    printf("\n%d segundos equivalen a : %d horas", segundosI, horas);
    printf(" %d minutos y %d segundos.\n", minutos, segundosR);

    return 0;
}