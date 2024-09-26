#include <stdio.h>
int main(){
  float preco = 0.0f;
printf("leia um preco: ");
  scanf("%f", &preco);

  printf("voce digitou: %.2f\n", preco);
  
   double fracao = 0.0;
  printf("digite uma fração:");
  scanf("%lf", &fracao);
    printf("Você digitou: %.10f\n", fracao);



  return 0;
}