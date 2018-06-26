#include <stdio.h>

int main(){
    
    int pares = 0, impares = 0, positivos = 0, negativos = 0, i = 0, n;
    do{
        scanf("%i", &n);
        if(n % 2 == 0)
            pares++;
        else
            impares++;
        if(n > 0)
            positivos++;
        else if(n < 0)
            negativos++;
        i++;
    }while(i<5);
    
    printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", pares, impares, positivos, negativos);
    
    return 0;
}