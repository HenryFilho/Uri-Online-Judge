#include <stdio.h>
#include <math.h>

int main(){
    
    int n, i = 1;
    scanf("%i",&n);
    
    do{
        if(i % 2 == 0)
            printf("%i^2 = %.0lf\n",i,pow(i,2));
        i++;
    }while(i<=n);
    
    return 0;
}