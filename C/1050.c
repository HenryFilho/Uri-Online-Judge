#include <stdio.h>

char* mapa(int ddd){
    
    if(ddd == 61)
        return "Brasilia";
    if(ddd == 71)
        return "Salvador";
    if(ddd == 11)
        return "Sao Paulo";
    if(ddd == 21)
        return "Rio de Janeiro";
    if(ddd == 32)
        return "Juiz de Fora";
    if(ddd == 19)
        return "Campinas";
    if(ddd == 27)
        return "Vitoria";
    if(ddd == 31)
        return "Belo Horizonte";
    return "DDD nao cadastrado";
    
}

int main(){
    
    int ddd;
    scanf("%i", &ddd);
    
    printf("%s\n", mapa(ddd));
    
    return 0;
}