#include <stdio.h>
#include <stdlib.h>

void validacao(){
    int mes;

    printf("Digite um numero: ");
    scanf("%d", &mes);

    switch(mes) {
    case 1:
        printf("\n Janeiro\n");
        break;
    case 2:
        printf("\n Fevereiro\n");
        break;
    case 3:
        printf("\n Marco\n");
        break;
    case 4:
        printf("\n Abril\n");
        break;
    case 5:
        printf("\n Maio\n");
        break;
    case 6:
        printf("\n Junho\n");
        break;
    case 7:
        printf("\n Julho\n");
        break;
    case 8:
        printf("\n Agosto\n");
        break;
    case 9:
        printf("\n Setembro\n");
        break;
    case 10:
        printf("\n Outubro\n");
        break;
    case 11:
        printf("\n Novembro\n");
        break;
    case 12:
        printf("\n Dezembro\n");
        break;
    default:
        printf("\n Valor nao corresponde a nenhum mes!\n");
    }
}

void condicao(){
    printf("Usuarios com idade menor que 16 anos nao podem votar\n");
    printf("Usuarios com idade entre 16 e menor que 18 anos possuem voto facultativo\n");
    printf("Usuarios com idade entre 18 e 70 anos possuem voto obrigatorio\n");
    printf("Usuarios com idade maior que 70 anos possuem o voto facultativo\n");
}

void menu(){
    printf("%s\n", "Digite uma das opcoes abaixo:");
    printf("%s\n", "1 - Digite uma nova data de nascimento");
    printf("%s\n", "2 - Verifique a condicao para votacao");
    printf("%s\n", "3 - imprima na tela o ultimo mes inserido no formato texto");
    printf("%s\n", "4 - Encerre o programa");
}

int main(int argc, char *argv[]){
    int opcao;
    int idade, dia, mes, ano;
    int continuar = 1;
    
    menu();
    
    while(continuar > 0){
		scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("Digite uma nova data de nascimento:\n");
            scanf("%d%d%d", &dia, &mes, &ano);
            idade = 2022-ano;
                if(idade<16){
                        printf("Nao pode votar");
                    }
                    else if(idade >= 16 && idade < 18){
                        printf("Voto facultativo\n");
                    }
                    else if (idade > 18 && idade < 70){
                        printf("Voto obrigatorio\n");

                    }
                        else if (idade >= 70){
                            printf("voto facultativo\n");
                        }
                        printf("Sua data de nascimento eh:\n %d/%d/%d\n",dia,mes,ano);
    			        printf("------------------------------------------------------\n");
                        menu();
        break;

        case 2:
        printf("------------------------------------------------------\n");
        printf("Verifique a condicao para votacao\n");
        condicao();
        printf("------------------------------------------------------\n");
        menu();
        break;

        case 3:
        printf("------------------------------------------------------\n");
        printf("Imprima na tela o ultimo mes inserido no formato texto\n");
        validacao();
        printf("------------------------------------------------------\n");
        menu();
        break;

        case 4:
        printf("------------------------------------------------------\n");
        printf("Encerrar o programa");
        continuar = 0;
        break;
        
        default:
        printf("opcao invalida");
        }
	}
    return 0;
}