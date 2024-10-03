#include <stdio.h>
int main(){
 int numero = 0;

 printf("entre com um numero: ");

 int deu_certo = scanf("%i" , &numero);

 int eh_divisivel_por_dois = numero % 2 == 0;

 //if completo
if (eh_divisivel_por_dois){
 printf("O numero %i eh par!\n", numero);
}else{ 
    printf("O numero %i eh impar!\n", numero);
}
   int idade = 0;
    printf("Entre com a sua idade: ");

    deu_certo = scanf("%i", &idade);
    
    if (idade <16) {
        printf("voce nao pode votar!\n");
        }else{
        if(idade < 18|| idade > 70) {
            printf("voce pode votar!\n");
        }else{
     printf("voce eh obrigado a votar\n");
        }
    }
    float media=0.0f;
    printf("entre com a media final: ");
    deu_certo = scanf("%f", &media);

    //if encadeado
    if(media >= 9.0f && media <= 10.0f){
        printf("a mencao eh SS\n");
    }else if (media >= 7.0f && media <=8.9f){
        printf("a mencao eh MS\n");
    }else if (media >=5.0f && media <=6.9f){
    printf("a mencao eh MM\n");
    }else if(media >= 3.0f && media <=4.9f){
        printf("a mencao eh MI\n");
    }else if (media >= 0.1f && media <= 2.9f){
        printf("a mencao eh II\n");
    }
    
    
    
    
    
    
    return 0;
}