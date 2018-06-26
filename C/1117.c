#include <stdio.h>

int main(){
    
    double nota, nota1, nota2, media;
    int cont = 0;
    do{
        scanf("%lf", &nota);
        if(0 < nota && nota < 10.1){
            if(cont == 0)
                nota1 = nota;
            else
                nota2 = nota;
            cont++;
        }else{
            printf("nota invalida\n");
        }
    }while(cont<2);
    
    media = (nota1 + nota2) / 2;
    printf("media = %.2lf\n", media);
    
    return 0;
}