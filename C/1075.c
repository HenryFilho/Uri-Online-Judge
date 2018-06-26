#include <stdio.h>
#include <math.h>

int main(){
    
    int n;
    scanf("%i",&n);
    
    int i = 1;
    do{
        if(i % n == 2)
            printf("%i\n",i);
        i++;
    }while(i<=10000);
    
    return 0;
}