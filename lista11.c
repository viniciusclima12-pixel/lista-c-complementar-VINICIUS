#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int numero;


    setlocale(LC_ALL, "portuguese");

    printf("Informe um numero: ");
    scanf(" %d", &numero);

    if(numero %2 == 0){
       printf("o numero e par");
    }else{
     printf("o numero e impar");
    }
    


    system("pause");
    return 0;
}