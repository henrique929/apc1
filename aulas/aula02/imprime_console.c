#include <stdio.h> //biblioteca de entrada e saida na console

int main() {
 
  printf( "texto teste\n" ); //imprime texto na console
  printf( "%i\n", 10); 
  printf ("%i %i\n", 30,40);
  printf ("%5i \n", 1);
  printf("%05i\n",21);
  //imprime um numero decimal
  printf ("%f\n", 3.5);
  printf ("%.3f\n", 3.14159);
  printf ("%8.2f\n", 110.5);
  printf ("%8.2f\n", 2556.86);
  //imprime um caractere
  printf ("%c\n", 'A');
  printf ("%c\n", 65);
  //imprime uma string
  printf ("%s\n", "boa noite");
  printf ("%30s!\n", "quero cafe"); 
  printf ("%-30s!\n", "quero cafe");
  
  return 0;
  
}