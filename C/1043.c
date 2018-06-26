#include <stdio.h>
#include <math.h>

int main(){
    
    double a, b, c, result;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if(fabs(b-c) < a && a < b+c && fabs(a-c) < b && b < a+c && fabs(a-b) < c && c < a+b){
        result = a + b + c;
        printf("Perimetro = %.1lf\n", result);
    }else{
        result = ((a+b) * c) / 2;
        printf("Area = %.1lf\n", result);
    }
    
    return 0;
}