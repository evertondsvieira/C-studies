//Implementar uma função para adicionar (append) n caracteres iniciais de uma string2 para o final de uma string1.

#include <stdio.h>
#include <string.h>

int main() {
    char string1[15] = "Meu nome é ";
    char string2[10] = "Everton";

    strcat(string1, string2);

    printf("%s\n", string1);

    return 0;
}