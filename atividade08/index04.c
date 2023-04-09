//Crie um programa que contenha um array de inteiros com 5 elementos. 
//Utilize ponteiros pare realizar a leitura do array via teclado. 
//Após isto, percorra novamente este primeiro array  com  o  ponteiro  e  faça  com  que  um  segundo  array  receba  cada  elemento  do primeiro. 

#include <stdio.h>

#define arrayLength 5

int main() {
    int arr1[arrayLength];
    int arr2[arrayLength];
    int *ptr = arr1;

    printf("Digite %d números inteiros:\n", arrayLength);

    for (int i = 0; i < arrayLength; i++) {
        scanf("%d", ptr++);
    }

    printf("Elementos do primeiro array:\n");
    ptr = arr1;

    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", *ptr++);
    }

    printf("\n");

    ptr = arr1;

    for (int i = 0; i < arrayLength; i++) {
        *(arr2 + i) = *(ptr + i);
    }

    printf("Elementos do segundo array (cópia):\n");

    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    return 0;
}
