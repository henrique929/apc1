#include <stdio.h>
int main (){
int numero = 0;
int maior = 0;
int menor = 0;
scanf("%i", &numero);
maior = numero;
menor = numero;

while(numero != 0) {
    if (numero > maior) {
   maior = numero;
}
if (numero < menor) {
   menor = numero;
}
scanf("%i", &numero);
}
printf("%i %i", maior, menor);
return 0; 
}