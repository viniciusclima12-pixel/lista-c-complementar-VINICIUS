#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float altura1, altura2, altura3, media;

    setlocale(LC_ALL, "portuguese");

    printf("digite a altura da primeira: ");
    scanf(" %f", &altura1);
   
    printf("digite a altura da segunda pessoa: ");
     scanf(" %f", &altura2);

    printf("digite a altura da terceira pessoa: ");
     scanf(" %f", &altura3);

    media = (altura1 + altura2 + altura3) /3;

    printf("A media das alutras das 3 pessoas e = %.2f", media);

    system("pause");
    return 0;
}