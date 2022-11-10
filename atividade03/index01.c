//Dado um país A, com 5000000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7000000 de habitantes e uma taxa de natalidade de 2% ao ano, escrever um programa em C que seja capaz de calcular e mostrar o tempo necessário para que a população do país A ultrapasse a população do país B. (Utilize a estrutura while).

#include <stdio.h>

int main()
{
    int countryA = 5000000;
    int countryB = 7000000;
    int populationCountryA;
    int populationCountryB;
    int years = 0;

    while(countryB > countryA){
        populationCountryA = countryA * 0.03;
        populationCountryB = countryB * 0.02;

        countryA += populationCountryA;
        countryB += populationCountryB;
        
        years++;
    }
    
    printf("O pais A passará o pais B em, %i, ano\n", years);

    return 0;
}