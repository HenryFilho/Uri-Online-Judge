#include <stdio.h>

int main(){
    
    int codigoUm, numeroUm, codigoDois, numeroDois;
    double valorUm, valorDois, total;
    scanf("%i %i %lf %i %i %lf", &codigoUm, &numeroUm, &valorUm, &codigoDois, &numeroDois, &valorDois);
    
    total = (valorUm * numeroUm) + (valorDois * numeroDois);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    
    return 0;
}