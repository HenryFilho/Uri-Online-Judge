#include <stdio.h>

int main(){
    
    int percentual;
    double salario0, salario1, ganho;
    scanf("%lf", &salario0);
    
    if(salario0<=400){
        percentual = 15;
        salario1 = salario0 * 1.15;
    }else if(salario0<=800){
        percentual = 12;
        salario1 = salario0 * 1.12;
    }else if(salario0<=1200){
        percentual = 10;
        salario1 = salario0 * 1.10;
    }else if(salario0<=2000){
        percentual = 7;
        salario1 = salario0 * 1.07;
    }else{
        percentual = 4;
        salario1 = salario0 * 1.04;
    }
    
    ganho = salario1 - salario0;
    printf("Novo salario: %.2lf\n", salario1);
    printf("Reajuste ganho: %.2lf\n", ganho);
    printf("Em percentual: %i %%\n", percentual);
    
    return 0;
}