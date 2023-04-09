// Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o endereço das posições contendo valores pares.

#include <stdio.h>

int main() {
    int arr[5];
    printf("Digite 5 números inteiros:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Endereços das posições com valores pares:\n");

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%p\n", &arr[i]);
        }
    }

    return 0;
}