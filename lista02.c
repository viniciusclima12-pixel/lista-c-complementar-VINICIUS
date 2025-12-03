#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float base, altura, area;

    setlocale(LC_ALL, "portuguese");

    printf("Digite tamanho da base do triagulo: ");
    scanf(" %f", &base);
    printf("Digite a altura do triagulo: ");
    scanf(" %f", &altura);
    area = base * altura /2;
    printf("A AREA DO TRIANGULO DE BASE = %.2f E DE ALTURA = %.2f, AREA = %.2f", base, altura, area);

   
    

    system("pause");
    return 0;
}