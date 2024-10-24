#include <stdio.h>
int main()
{
    int nota = 0;

    do
    {
        printf("entre com um numero de 1 a 10:");
        scanf("%i", &nota);
       while (getchar() != '\n')
       
        if (nota < 1 || nota > 10)
        {
            printf("Nota invalida. Tente novamente!\n");
        }

    } while (nota < 1 || nota > 10);

    return 0;
}