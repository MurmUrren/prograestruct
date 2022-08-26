/*
Crear un programa .c llamado Apellido_Nombre_P1_4.c que realice lo siguiente:
a. El programa debe calcular cuantos litros de gasolina ha consumido un carro de 
combustión interna. Un auto de estas características puede recorrer 12 kilómetros
por litro en ciudad y 17 kilómetros por litro en carretera.
b. Cree un programa que determine la cantidad de litros de gasolina consumida por un 
vehículo en base a los kilómetros recorridos tanto en ciudad como en carretera.
*/

#include <stdio.h>

int main(void)
{
    float litrosCiudad, litrosCarretera, litrosConsumidos, kmCiudad, kmCarretera;

    printf("\nIntroduce los kilometros que conduciste en ciudad: ");
    scanf("%f", &kmCiudad); //almacena los kilometros recorridos en ciudad

    printf("\nIntroduce los kilometros que conduciste en carretera: ");
    scanf("%f", &kmCarretera); //almacena los kilometros recorridos en carretera

    litrosCiudad = kmCiudad / 12; //formula para calcular los litros consumidos en base a los km recorridos en ciudad
    litrosCarretera = kmCarretera / 17; //formula para calcular los litros consumidos en base a los km recorridos en carretera
    litrosConsumidos = litrosCarretera + litrosCiudad; //suma de los litros consumidos en carretera y ciudad

    printf("\nEn total has consumido %.2f litros de gasolina", litrosConsumidos);

    return 0;
}