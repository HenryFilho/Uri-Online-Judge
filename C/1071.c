#include <stdio.h>

int main(){
    
    int a, b, x, y, sum = 0;
    scanf("%i %i", &a, &b);
    
    if(a<b){
        x = a;
        y = b;
    }else{
        x = b;
        y = a;
    }
    
    x++;
    do{
        if(x % 2 != 0)
            sum += x;
        x++;
    }while(x<y);
    
    printf("%i\n",sum);
    return 0;
}