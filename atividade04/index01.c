//Desenvolva um programa para comparar a idade de Pedro e a de Joana e informar quem é o mais velho.  
//Dados de entrada: idade de Pedro e de Joana (tipo das variáveis: inteiro, e valor em anos). 
//Observação: essas pessoas possuem idades diferentes.

#include <stdio.h>

int main(){
    int idadePedro, idadeJoana;

    printf("Escreva a idad de Pedro \n");
    scanf("%i", &idadePedro);
    printf("Escreva a idad de Joana \n");
    scanf("%i", &idadeJoana);

    if(idadePedro > idadeJoana){
        printf("A idade de Pedro é maior que a idade de Joana");
    } else {
        if(idadeJoana > idadePedro){
            printf("A idade de Joana é maior que a idade de Pedro");
        } else {
            printf("Valores inválidos \n");
        }
    }
    return 0;
}