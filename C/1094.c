#include <stdio.h>

int main(){
    
    int n, qtd, cobaias = 0, coelhos = 0, ratos = 0, sapos = 0;
    char tipo;
    double coelhos_p, ratos_p, sapos_p;
    scanf("%i",&n);
    
    do{
        scanf("%i %c", &qtd, &tipo);
        
        cobaias += qtd;
        if(tipo == 'C')
            coelhos += qtd;
        else if(tipo == 'R')
            ratos += qtd;
        else if(tipo == 'S')
            sapos += qtd;
        
        n--;
    }while(n>0);
    
    coelhos_p = coelhos * 100.0 / cobaias;
    ratos_p = ratos * 100.0 / cobaias;
    sapos_p = sapos * 100.0 / cobaias;
    
    printf("Total: %i cobaias\n", cobaias);
    printf("Total de coelhos: %i\n", coelhos);
    printf("Total de ratos: %i\n", ratos);
    printf("Total de sapos: %i\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", coelhos_p);
    printf("Percentual de ratos: %.2lf %%\n", ratos_p);
    printf("Percentual de sapos: %.2lf %%\n", sapos_p);
    
    return 0;
}