#include <stdio.h>

int main(){
    
    int x, i = 0;
    scanf("%i", &x);
    
    do{
        if(i % 2 != 0)
            printf("%i\n",i);
        i++;
    }while(i<=x);
    
    return 0;
}