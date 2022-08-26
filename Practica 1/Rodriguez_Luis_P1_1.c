/*
Crear un programa .c llamado Apellido_Nombre_P1_1.c que realice lo siguiente:
a. El programa solicita la entrada de un carácter por parte del usuario y lo imprime. Ver 
funciones getchar() y putchar().
b. El programa solicita al usuario su nombre. Ver función gets().
c. El programa despliega un saludo utilizando el nombre del usuario. Por ejemplo, si el 
usuario se llama “Juan”, el programa despliega “Hola, Juan”. Ver función printf().
*/

#include <stdio.h>

int main(void)
{
    char caracter; //declarando variable tipo char, para que almacene un caracter 
    char nombre[50]; //declarando arraglo char, para almacenar el nombre

    printf("\nIntroduce un caracter: ");    
    caracter = getchar(); //getchar almacenara el caracter que introduzcamos

    printf("\nEl cararacter es: ");
    putchar(caracter); //imprime el caracter almacenado

    printf("\nIntroduce un tu nombre: ");
    scanf(" %s", nombre); //almacena el nombre que introduzcamos 

    printf("\nHola, %s\n", nombre); 

    return 0;
}

