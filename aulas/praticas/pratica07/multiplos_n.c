#include <stdio.h>
int main(){
int numero=0;
scanf("%i", &numero);
for (int i=0; i<102; i++){
if (i % numero == 0) {
  printf("%i, ", i);
}

    
    }


    return 0;
}