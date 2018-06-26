#include <stdio.h>

int main(){
    
    int p = 0, i = 0;
    double n, sum = 0;
    do{
        scanf("%lf", &n);
        if(n > 0){
            p++;
            sum += n;
        }
        i++;
    }while(i<6);
    
    sum /= p;
    printf("%i valores positivos\n", p);
    printf("%.1lf\n", sum);
    
    return 0;
}