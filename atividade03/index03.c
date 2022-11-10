//Uma loja utiliza o código V para compras à vista e o código P para compras à prazo. 
//Faça um algoritmo que receba o código de e o valor de 15 transações. Calcule e mostre:  
//•O valor total das compras à vista 
//•O valor total das compras a prazo 
//•O valor total das compras efetuadas  

#include <stdio.h>

int main(void)
{
    char codigo;
    float valor, avista, prazo, valorTotal = 0;
    int index = 1;

    printf ("Digite o codigo (V ou P): \n");
    for(index = 1; index <= 15; index++){
    codigo = getchar();
        if(codigo == 'V') {
            printf ("Digite o valor a vista: \n");
            scanf("%f", &valor);
            avista += valor;
        }
        else if(codigo == 'P') {
            printf ("Digite o valor a prazo: \n");
            scanf ("%f", &valor);
            prazo += valor;
        }
        getchar();
    }
    valorTotal = avista + prazo;

    printf ("Valor total das compras a vista: R$ %.2f \n", avista);
    printf ("Valor total das compras a prazo: R$ %.2f \n", prazo);
    printf ("Valor total das compras: R$ %.2f \n", valorTotal);

    return 0;
}