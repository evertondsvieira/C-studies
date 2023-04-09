//Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. 
//Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

#include<stdio.h>

int main(){
    int a, b;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &a, &b);

    if(&a > &b){
        printf("Conteudo de maior endereco:%d\n", a);
    } else {
        printf("Conteudo de maior endereco:%d\n", b);
    }

    return 0;
}