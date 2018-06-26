#include <stdio.h>

int main(){
    
    int valor, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    scanf("%i", &valor);
    
    printf("%i\n", valor);
    
    nota100 = valor / 100;
    valor -= nota100 * 100;
    printf("%i nota(s) de R$ 100,00\n", nota100);
    
    nota50 = valor / 50;
    valor -= nota50 * 50;
    printf("%i nota(s) de R$ 50,00\n", nota50);
    
    nota20 = valor / 20;
    valor -= nota20 * 20;
    printf("%i nota(s) de R$ 20,00\n", nota20);
    
    nota10 = valor / 10;
    valor -= nota10 * 10;
    printf("%i nota(s) de R$ 10,00\n", nota10);
    
    nota5 = valor / 5;
    valor -= nota5 * 5;
    printf("%i nota(s) de R$ 5,00\n", nota5);
    
    nota2 = valor / 2;
    valor -= nota2 * 2;
    printf("%i nota(s) de R$ 2,00\n", nota2);
    
    nota1 = valor;
    printf("%i nota(s) de R$ 1,00\n", nota1);
    
    return 0;
}

