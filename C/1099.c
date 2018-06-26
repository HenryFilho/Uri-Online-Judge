#include <stdio.h>
#include <math.h>

int main(){
    
    int n, x, y, i = 0, j = 0, k = 0, aux;
    scanf("%i", &n);
    
    int sum[n];
    do{
        scanf("%i %i", &x, &y);
        if(x>y){
            aux = x;
            x = y;
            y = aux;
        }
        j = x;
        sum[i] = 0;
        do{
            if(j % 2 != 0 && j != x && j != y)
                sum[i] += j;
            j++;
        }while(j<y);
        
        i++;
    }while(i<n);
    
    do{
        printf("%i\n",sum[k]);
        k++;
    }while(k<n);
    
    return 0;
}