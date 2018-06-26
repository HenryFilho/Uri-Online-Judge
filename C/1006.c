#include <stdio.h>

int main(){
    
    double a, b, c, pesoA, pesoB, pesoC, media;
    pesoA = 2;
    pesoB = 3;
    pesoC = 5;

    scanf("%lf %lf %lf", &a, &b, &c);
    
    media = (a * pesoA + b * pesoB + c * pesoC) / 10;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}