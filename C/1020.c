#include <stdio.h>

int main(){
    
    int anos, meses, dias, entrada;
    scanf("%i", &entrada);
    anos = entrada / 365;
    meses = (entrada % 365) / 30;
    dias = ((entrada % 365) % 30) % 30;
    
    printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", anos, meses, dias);
    
    return 0;
}

