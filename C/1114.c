#include <stdio.h>

int main(){
    
    int senha;
    while(1>0){
        scanf("%d", &senha);
        if(senha == 2002) break;
        printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");
    
    return 0;
}