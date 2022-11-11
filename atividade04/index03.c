//Escreva um programa para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius. 

#include <stdio.h>

int main(){
    float fahrenheit, celcius;

    printf("Escreva uma temperatura em Fahrenheit \n");
    scanf("%f", &fahrenheit);

    celcius = (fahrenheit - 32)/1.8;
    printf("A temperatura em Celcius é %fºC \n", celcius);
    return 0;
}
