#include <stdio.h>
#include<stdlib.h>
#include<locale.h>


int main (){

    
    int nota1, nota2 , totalNota;

    setlocale(LC_ALL, "Portuguese");

  
    printf("Digite a primeira nota: ");
    scanf(" %d", &nota1);

    printf("Digite a segunda nota: ");
    scanf(" %d", &nota2);

    totalNota = nota1 + nota2;

 if(totalNota >= 7){
    printf("Aprovado");
 }else{
    printf("Reprovado");
 }

    system("pause");
    return 0;
}