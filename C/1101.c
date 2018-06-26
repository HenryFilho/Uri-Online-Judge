#include <stdio.h>
#include <math.h>

int main(){
    
    int m, n, aux, i, sum;
    while(1>0){
        scanf("%i %i", &m, &n);
        if(m <= 0 || n <= 0) break;
        
        if(m>n){
            aux = m;
            m = n;
            n = aux;
        }
        
        i = m;
        sum = 0;
        do{
            printf("%i ", i);
            sum += i;
            i++;
        }while(i<=n);
        printf("Sum=%i\n", sum);
    }
    
    return 0;
}