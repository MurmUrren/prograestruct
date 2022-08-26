/*
Crear un programa .c llamado Apellido_Nombre_P1_3.c que realice lo siguiente:
a. El programa solicita la captura de la estatura del usuario y su peso. El programa 
imprime el Índice de Masa Corporal.
IMC = Peso/(Altura^2)
*/

#include <stdio.h>

int main(void)
{
    float peso, altura, imc; //declaracion de variables para peso, altura y almacenar el imc

    printf("\nIntroduce tu estatura en metros: ");
    scanf("%f", &altura); //almacena la estatura

    printf("\nIntroduce tu peso en kg: ");
    scanf("%f", &peso); //almacena el peso

    imc = peso / (altura * altura); //formula para calcular el imc

    printf("\nTu IMC es: %.1f\n", imc);

    return 0;
}