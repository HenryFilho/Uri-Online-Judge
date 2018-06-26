#include <stdio.h>

int main(){
    
    int valor, posicao = 1, maior_v = 0, maior_p;
    do{
        scanf("%i", &valor);
        if(valor>=maior_v){
            maior_v = valor;
            maior_p = posicao;
        }
        posicao++;
    }while(posicao<=100);
    
    printf("%i\n%i\n", maior_v, maior_p);
    
    return 0;
}