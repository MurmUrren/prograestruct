/*
Cree un programa llamado Apellido_Nombre_P2_1.c que solicite dos números. El programa 
realiza las operaciones de suma, resta, multiplicación, división y módulo entre ambos 
números e imprime los resultados
*/

#include <stdio.h>

int main(void)
{
    float numero1 = 0.0f, numero2 = 0.0f; //declaracion de los dos numeros en flotante
    
    printf("\nIntroduce dos numeros separados con un espacio: ");
    scanf("%f %f", &numero1, &numero2); //lee ambos numeros

    printf("\nLa suma de %.1f + %.1f es: %.1f", numero1, numero2, (numero1 + numero2));
    printf("\nLa resta de %.1f - %.1f es: %.1f", numero1, numero2, (numero1 - numero2));
    printf("\nLa multiplicacion de %.1f * %.1f es: %.1f", numero1, numero2, (numero1 * numero2));
    printf("\nLa division de %.1f / %.1f es: %.1f", numero1, numero2, (numero1 / numero2));
    printf("\nEl modulo de %.1f %% %.1f es: %d\n", numero1, numero2, (int)numero1 % (int)numero2);

    return 0;
}