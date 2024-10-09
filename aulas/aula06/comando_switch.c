#include <stdio.h>
int main() {
int nota = 0;
printf("entre com uma nota de 1 a 5\n: ");
scanf("%i", &nota);

if (nota == 1) {
printf("Voce ganhou 1 estrela!\n");
} else if (nota ==2){
    printf("Voce ganhou 2 estrelas!\n");
} else if (nota ==3){
    printf("Voce ganhou 3 estrelas!\n");
}else if(nota ==4){
    printf("Voce ganhou 4 estrelas\n");
}else if (nota ==5){
    printf("voce ganhou 5 estrelas!\n");
}else {
    printf("VOCE NAO GANHOU NADA\n");
}




    return 0;
}