#include <stdio.h>

int main(){
    
    int p = 0, i = 0, n;
    do{
        scanf("%i", &n);
        if(n % 2 == 0)
            p++;
        i++;
    }while(i<5);
    
    printf("%i valores pares\n", p);
    
    return 0;
}