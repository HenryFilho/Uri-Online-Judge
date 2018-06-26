#include <stdio.h>

int main(){
    
    int cod, qtd;
    float total;
    float precos[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    scanf("%i %i", &cod, &qtd);
    
    total = precos[cod-1] * qtd;
    
    printf("Total: R$ %.2lf\n", total);
    
    return 0;
}