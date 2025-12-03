#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int n1, n2, n3;

    setlocale(LC_ALL, "portuguese");

    
   printf("Digite o primeiro numero: ");
   scanf(" %d", &n1);
    
   printf("Digite o segundo numero: ");
   scanf(" %d", &n2);
    
   printf("Digite o terceiro numero: ");
   scanf(" %d", &n3);

   if(n1 > n2 && n1 > n3){
    printf("o primeiro numero e o maior");
   }else if(n2 > n1 && n2 > n3){
    printf("o segundo numero e o maior");
   }else
    printf("o terceiro numero e o maior");
   

    system("pause");
    return 0;
}