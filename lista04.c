#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
     
    float valorProduto, acrescimo = 0.15, valorTotal;

    setlocale(LC_ALL, "portuguese");

    printf("Digite o valor do produto: ");
    scanf(" %f", &valorProduto);
    
    valorTotal = (valorProduto * acrescimo)* valorProduto;
    
    printf("O valor do produto depois do acrescimo de 15%, deu um valor total de %.2f", valorTotal);
   
    

    system("pause");
    return 0;
}