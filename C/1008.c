#include <stdio.h>

int main(){
    
    int funcionario, horas;
    double valor, salario;

    scanf("%i %i %lf", &funcionario, &horas, &valor);
    
    salario = valor * horas;

    printf("NUMBER = %i\nSALARY = U$ %.2lf\n", funcionario, salario);

    return 0;
}