#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    char nome[50], cidade[50];

    setlocale(LC_ALL, "portuguese");

    printf("Digite seu nome: ", nome);
    fgets(nome, 50, stdin);
    printf("Digite a cidade onde voce mora: ", cidade);
    fgets(cidade, 50, stdin);

    printf("%s voce mora em %s", nome, cidade);
   
    

    system("pause");
    return 0;
}