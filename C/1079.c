#include <stdio.h>

int main(){
    
    int n, i = 0;
    double a, b, c;
    scanf("%i",&n);
    
    double media[n];
    
    do{
        scanf("%lf %lf %lf", &a, &b, &c);
        media[i] = (a * 2 + b * 3 + c * 5) / 10;
        
        i++;
    }while(i<n);
    
    i = 0;
    do{
        printf("%.1lf\n",media[i]);
        i++;
    }while(i<n);
    
    return 0;
}