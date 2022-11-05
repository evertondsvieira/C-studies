//Faça um programa que apresente os números de 1 a 10, sendo que cada número 
//deve ser impresso em uma linha e os números ímpares deslocados (\t) a direita.

#include <stdio.h>
#include <locale.h>
int main()
{
    int index = 1;
    while(index <= 10){
        if(index % 2 == 0){
            printf("\n");
        } else {
            printf("\n\t");
        }
            printf("%d", index);
        index++;
    }
    return 0;
}