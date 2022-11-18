//Elabore um algoritmo que crie e preencha duas matrizes 10×10 com valores aleatórios porém apenas “0s” e “1s” e em seguida, compare o conteúdo das duas matrizes (se possuem os mesmos valores emcada posição).
//Detalhes:
//a) Use a declaração de uma CONSTANTE para o tamanho das matrizes (para testes inicie com tamanho 2e quando o algoritmo estiver pronto considere o tamanho 10);
//b) imprima o resultado da comparação das duas matrizes (somente os números que são IGUAIS, ou seja, 0 em uma matriz e 0 na outra etc);c) Não há necessidade de apresentar as matrizes geradas aleatoriamente;
//c) Crie um lopping (10 vezes) no algoritmo para criar as matrizes randômicas e os resultados na tela;
//d) Declare uma constante de tempo... cada “resultado da comparação” deve ficar exposto por 5segundos antes de trocar para a próxima iteração;
//e) A cada iteração o programa deve considerar limpar a tela e apresentar a partir do topo da tela;

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    unsigned short matriz1[10][10], matriz2[10][10], i, j, aux;
    char vet[10][10];

    for(aux = 0; aux < 10; aux++){
        for(i = 0; i < 10; i++){
            for(j = 0; j < 10; j++){
                matriz1[i][j] = rand() %2;
            }
        }
        for(i = 0; i < 10; i++){
            for(j = 0; j < 10; j++){
                matriz2[i][j] = rand() %2;
            }
        }
        printf("Os numeros repetidos sao:\n");
        for(i = 0; i < 10; i++){
            for(j = 0; j < 10; j++){
                if (matriz1[i][j] == matriz2[i][j]){
                    vet[i][j] = matriz1[i][j] + '0';
                } else {
                    vet[i][j] = '--';
                }
                printf("%c ", vet[i][j]);
            }
            printf("\n");
        }
        sleep(5);
        system("cls");
        }
    return 0;
}