//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para estas variáveis. 
//Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. 
//Imprima os valores das variáveis antes e após a. modificação. 

#include <stdio.h>

int main(){
    int inteiro = 10;
    float real = 2.5;
    char caractere = 'e';

    int* pInteiro = &inteiro;
    float* pReal = &real;
    char* pCaractere = &caractere;

    printf("Antes da modificacao:\n");
    printf("inteiro = %d\n", inteiro);
    printf("real = %.2f\n", real);
    printf("caractere = %c\n", caractere);

    *pInteiro = 20;
    *pReal = 5.5;
    *pCaractere = 'x';

    printf("Depois da modificacao:\n");
    printf("inteiro = %d\n", inteiro);
    printf("real = %.2f\n", real);
    printf("caractere = %c\n", caractere);

    return 0;
}