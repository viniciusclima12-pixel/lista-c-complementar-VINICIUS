#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
     
    float raio, c, PI = 3.14;

    setlocale(LC_ALL, "portuguese");

    printf("Digite qual e o raio do : ");
    scanf(" %f", &raio);

    c = 2 * (PI * raio);

    printf("A circunferência do circulo e = %.2f", c);
   
    

    system("pause");
    return 0;
}