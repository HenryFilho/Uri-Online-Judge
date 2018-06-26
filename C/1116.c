#include <stdio.h>

int main(){
    
    int n, x, y;
    scanf("%i", &n);
    do{
        scanf("%i %i", &x, &y);
        if(y == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1lf\n", (double)x / y);
        n--;
    }while(n>0);
    
    return 0;
}