//Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. 
//Percorra a matriz com um ponteiro imprima o endereço e o valor de cada posição dessa matriz. 

#include <stdio.h>

int main() {
    float matriz[3][3] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}, {7.0, 8.0, 9.0}};

    float *ptr = &matriz[0][0]; 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereço: %p - Valor: %.2f\n", ptr, *ptr);
            ptr++; 
        }
    }

    return 0;
}