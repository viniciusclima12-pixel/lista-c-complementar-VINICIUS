#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

   
    float preco, precoFinal, desconto = 0.1;



    setlocale(LC_ALL, "Portuguese");

    printf("Digite o preco do produto: ");
    scanf(" %f", &preco);
    precoFinal = preco - (preco * desconto);
    printf("O preco com desconto =  %.2f", precoFinal);





    
    system("pause");
    return 0;
}