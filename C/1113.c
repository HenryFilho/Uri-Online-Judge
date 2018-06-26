#include <stdio.h>
#include <math.h>

int main(){
    
    int x, y;
    while(1>0){
        scanf("%i %i", &x, &y);
        if(x == y) break;
        
        if(x<y)
            printf("Crescente\n");
        else
            printf("Decrescente\n");
    }
    
    return 0;
}