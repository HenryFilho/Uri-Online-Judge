#include <stdio.h>

int main(){
    
    int n, x, in = 0, out = 0;
    scanf("%i", &n);
    
    do{
        scanf("%i", &x);
        if(10<=x && x<=20)
            in++;
        else
            out++;
        n--;
    }while(n>0);
    
    printf("%i in\n%i out\n", in, out);
    
    return 0;
}