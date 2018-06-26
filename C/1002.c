#include <stdio.h>

int main(){
    
    double area, n, raio;
    n = 3.14159;
    scanf("%lf", &raio);
    
    area = raio * raio * n;
    
    printf("A=%.4lf\n", area);

    return 0;
}