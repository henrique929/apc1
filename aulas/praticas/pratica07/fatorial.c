#include <stdio.h>
int main (){
int numero=0;
int fatorial=1;
scanf("%i", &numero);
for(int i=1; i<numero; i++) {
    fatorial = fatorial * i;
    
}
printf("fatorial de %i = %i", numero,fatorial);
    return 0;
}