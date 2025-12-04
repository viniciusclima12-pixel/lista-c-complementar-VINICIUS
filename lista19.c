#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    int idade;

    setlocale(LC_ALL, "portuguese");

    printf("Digite sua idade: ");
    scanf(" %d", &idade);

    if(idade <= 12){
        printf("VOCE E CRIANÇA");
    }else if(idade <= 17 || idade == 13){
        printf("VOCE E ADOLECENTE");
    }else if(idade <= 59 || idade == 18){
        printf("VOCE E ADULTO");
    }else
      printf("VOCE E IDOSO");
     
   
    

    system("pause");
    return 0;
}