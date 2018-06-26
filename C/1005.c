#include <stdio.h>

int main(){
    
    double a, b, pesoA, pesoB, media;
    pesoA = 3.5;
    pesoB = 7.5;

    scanf("%lf %lf", &a, &b);
    
    media = (a * pesoA + b * pesoB) / 11;

    printf("MEDIA = %.5lf\n", media);

    return 0;
}