#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    int peso1, peso2;

    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite o peso da primeira pessoa: ");
    scanf(" %d", &peso1);
    printf("Digite o peso da segunda pessoa: ");
    scanf(" %d", &peso2);

 if(peso1 > peso2){
    printf("o peso da primera pessoa e maior que da segunda, %dkg", peso1);
 }else if(peso2 > peso1){
    printf("o peso da segunda pessoa e maior que da primera, %dkg", peso2);
 }else{
    printf("As duas pessoas tem o mesmo peso, %dkg", peso1);
}

    
    system("pause");
    return 0;
}