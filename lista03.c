#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
      
    float km, ms;

    setlocale(LC_ALL, "portuguese");
     
    printf("Digite a velocidade em km/h que deseja converter para m/s: ");
    scanf(" %f", &km);
    ms = km / 3.6;
    printf("EM %.2f KM/H TEM %.2f M/S", km, ms);
    
   
    

    system("pause");
    return 0;
}