#include <stdio.h>

int main(){
    
    double valor, cont;
    int nota100, nota50, nota20, nota10, nota5, nota2;
    int moeda100, moeda50, moeda25, moeda10, moeda5, moeda1;
    scanf("%lf", &valor);
    
    int notas = valor;
    int moedas = (valor - notas) * 100;
    
    nota100 = notas / 100; cont = nota100 * 100;
    nota50 = (notas - cont) / 50; cont += nota50 * 50;
    nota20 = (notas - cont) / 20; cont += nota20 * 20;
    nota10 = (notas - cont) / 10; cont += nota10 * 10;
    nota5 = (notas - cont) / 5; cont += nota5 * 5;
    nota2 = (notas - cont) / 2; cont += nota2 * 2;
    moeda100 = notas - cont; cont = 0;
    moeda50 = moedas / 50; cont = moeda50 * 50;
    moeda25 = (moedas - cont) / 25; cont += moeda25 * 25;
    moeda10 = (moedas - cont) / 10; cont += moeda10 * 10;
    moeda5 = (moedas - cont) / 5; cont += moeda5 * 5;
    moeda1 = moedas - cont;
    
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n%i nota(s) de R$ 50.00\n%i nota(s) de R$ 20.00\n%i nota(s) de R$ 10.00\n%i nota(s) de R$ 5.00\n%i nota(s) de R$ 2.00\n", nota100, nota50, nota20, nota10, nota5, nota2);
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n%i moeda(s) de R$ 0.50\n%i moeda(s) de R$ 0.25\n%i moeda(s) de R$ 0.10\n%i moeda(s) de R$ 0.05\n%i moeda(s) de R$ 0.01\n", moeda100, moeda50, moeda25, moeda10, moeda5, moeda1);
    
    
    return 0;
}

