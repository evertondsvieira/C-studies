#include <stdio.h>
#include<math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("A = ");
    scanf("%f", &a);
    printf("B = ");
    scanf("%f", &b);
    printf("C = ");
    scanf("%f", &c);

    if(a==0){
        printf("Não é uma equação do segundo grau");
        return 0;
    }

    delta = pow(b,2) - 4*a*c;
    if(delta < 0){
        printf("Não existem raizes reais");
        return 0;
    }

    if(delta == 0){
        x1 = ( (-b +sqrt(delta)) / 2*a);
        printf("A unica raiz é %.1f", x1);
    } else {
        x1 = ( (-b +sqrt(delta)) / 2*a);
        x2 = ( (-b -sqrt(delta)) / 2*a);
        printf("As raizes são: %.1f e %.1f", x1, x2);
    }
    return 0;
}