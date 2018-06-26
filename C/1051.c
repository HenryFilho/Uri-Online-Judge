#include <stdio.h>

double calcImposto(double salario){
    
    if(salario <= 2000.0)
        return 0.0;
    
    double imposto = 0.0;
    if(salario > 4500.0){
        imposto += (salario - 4500.0) * 0.28;
        salario = 4500.0;
    }
    if(salario > 3000.0){
        imposto += (salario - 3000.0) * 0.18;
        salario = 3000.0;
    }
    imposto += (salario - 2000.0) * 0.08;
    return imposto;
    
}

int main(){
    
    double salario;
    scanf("%lf", &salario);
    
    if(calcImposto(salario) == 0)
        printf("Isento\n");
    else
        printf("R$ %.2lf\n", calcImposto(salario));
    
    
    return 0;
}