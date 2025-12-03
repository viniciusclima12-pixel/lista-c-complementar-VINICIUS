#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    int n, dobroN;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um numero: ");
    scanf(" %d", &n);
    dobroN = n * 2;
    printf("O triplo do numero %d = %d", n, dobroN);



    
    system("pause");
    return 0;
}