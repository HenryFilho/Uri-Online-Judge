#include <stdio.h>

int main(){
    
    int p = 0, i = 0;
    double n;
    do{
        scanf("%lf", &n);
        if(n > 0)
            p++;
        i++;
    }while(i<6);
    
    printf("%i valores positivos\n", p);
    
    return 0;
}