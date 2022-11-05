//Faça um programa que: leia um valor numérico inserido por um usuário e 
//atribua ele para uma variável x e depois imprima o dado presente nesta variável; 

#include <stdio.h>
#include <string.h>
int main()
{
    int base;
    int altura;
    int area;

    printf("Escreva o valor da base: ");
    scanf("%i", &base);

    printf("Escreva o valor da altura: ");
    scanf("%i", &altura);
    
    area = (base * altura)/2;

    printf("O valor do triangulo eh: %i\n", area);

    return 0;
}