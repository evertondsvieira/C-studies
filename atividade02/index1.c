//Leia a idade do usuário; Imprima essa idade da seguinte forma: “A sua idade é: ”. 
//Não se esqueça de quebrar uma linha no ato de impressão. 

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char idade[4];
	printf("Digite a sua idade\n");
	fgets(idade,4,stdin);
	printf("A sua idade eh: %s\n", idade);
	return 0;
}
