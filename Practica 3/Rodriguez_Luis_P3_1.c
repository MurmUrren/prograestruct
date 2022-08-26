/*
Cree un programa llamado Apellido_Nombre_P3_1.c que despliegue un menú y despliegue 
un mensaje según la opción que el usuario seleccione. El menú debe contener al menos 3 
opciones para seleccionar. Ejemplo:
-----MENU-----
[1] Opcion1
[2] Opcion2
[3] Opcion3
Si el usuario presiona la tecla ‘1’ la Opcion1 del menú se selecciona y se muestra un mensaje 
indicando que opción fue seleccionada.
*/

#include <stdio.h>

int main(void)
{
    int opcion; //variable para almacenar la opcion elegida

    printf("\n-----MENU-----");
    printf("\n[1] Opcion1");
    printf("\n[1] Opcion2");
    printf("\n[1] Opcion3");
    printf("\nSelecciona la opcion deseada introduciendo el numero que la acompaña: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
        printf("\nHas elegido la opcion 1");
        break;

        case 2:
        printf("\nHas elegido la opcion 2");
        break;

        case 3:
        printf("\nHas elegido la opcion 3");
        break;
        
        default:
        printf("\nHas elegido una opcion no valida");
        break;
    }

    return 0;
}