//Faça um programa em C que mostre a tabuada de qualquer número escolhido pelo usuário (considerar tabuada do número 1 ao 10).  

#include <stdio.h>

int main()
{
    int number;
    int index;

    printf("Digite algum numero: \n");
    scanf("%i", &number);

    for(index=1; index<=10; index++){
        printf("%i x %i = %i\n", number, index, number * index);
    }

    return 0;
}