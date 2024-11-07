#include <stdio.h>
#include <string.h>
int main()
{
    char primeiro_nome[20];
    printf("entre com seu primeiro nome:");
    scanf("%s", primeiro_nome);
    char ultimo_nome[20];
    printf("entre com seu ultimo nome:");
    scanf("%s", ultimo_nome);
    char nome[40];
    strcpy(nome, primeiro_nome);
    printf("seu nome eh '%s'\n",nome);
    // nome = primeiro_nome + ultimo_nome;
    strcpy(nome, " ");
    strcpy(nome, ultimo_nome);
    printf("seu nome eh'%s'\n", nome);

    // primeiro_nome == ultimo_nome;
if(strcpy(primeiro_nome, ultimo_nome)<0){
    printf("A ordem eh %s %s", primeiro_nome, ultimo_nome);
}else{
    printf("A ordem eh %s %s", ultimo_nome, primeiro_nome);
}
//quantos caracteres
printf("O nome '%s' tem %i caracteres\n", nome, strlen(nome));
//procurar pelo nome rodrigues
if(strstr(nome, "rodrigues")){
    printf("Sou da familia rodrigues\n");
}else{
    printf("nao sou da familia rodrigues\n");
}
    //preecher uma string
    memset(nome,'a',10);
    printf("seu nome eh'%s'\n",nome);
    memset(nome,'b',20);
    printf("seu nome eh'%s'\n",nome);
    memset(nome,0,sizeof(nome));
    printf("seu nome eh'%s'\n",nome);



    return 0;
}