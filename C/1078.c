#include <stdio.h>

int main(){
    
    int n, m;
    scanf("%i",&n);
    
    int i = 1;
    do{
        m = n * i;
        printf("%i x %i = %i\n", i, n, m);
        i++;
    }while(i<=10);
    
    return 0;
}