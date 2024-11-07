#include<stdio.h>

int main(){

    char frase[30];
    printf("ENTRE COM UMA FRASE: \n");
    scanf("%s", frase);

    int matriz[6][5];
/*
  0 1 2 3 4 5
 0
 1
 2
 3
 4
*/
    int k=0;
    for(int i=0; i<6 ; i++){
        for(int j=0; j<5 ; j++){
            matriz[i][j] = k;
            k++;
        }
    }
    printf("A transposicao da frase eh %s\n", frase);
        return 0;
}