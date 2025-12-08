#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int numero, i;

    setlocale(LC_ALL, "portuguese");

    printf("Digite um numero: ");
    scanf(" %d", &numero);
    
    for(i=1; i<=numero; i++){
        printf("%d", i ,);
    }
   
    

    system("pause");
    return 0;

}
