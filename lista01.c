#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float horas, minutos;

    setlocale(LC_ALL, "portuguese");

    printf("Digite o valor em horas a ser covertidos em minutos: ");
    scanf(" %f", &horas);
    minutos = horas * 60;
    printf("A quantidade de minutos em %f horas = %.2f", horas, minutos);
   
    

    system("pause");
    return 0;
}