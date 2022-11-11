//Dados três números inteiros positivos, informar que tipo de triângulo eles definem: 
//equilátero: 3 lados iguais; 
//isósceles: 2 lados iguais; 
//escaleno: 3 lados distintos;

#include <stdio.h>

int main(){
    int valor1, valor2, valor3;

    printf("Insira o valor do primeiro lado \n");
    scanf("%i", &valor1);
    printf("Insira o valor do segundo lado \n");
    scanf("%i", &valor2);
    printf("Insira o valor do terceiro lado \n");
    scanf("%i", &valor3);

    if(valor1 == valor2 && valor2 == valor3){
        printf("É um triângulo equilátero \n");
    } 
    
    if(valor1 == valor2 && valor2 != valor3){
        printf("É um triângulo isósceles \n");
    }

    if(valor1 != valor2 && valor2 != valor3){
        printf("É um triângulo escaleno \n");
    }
    return 0;
}