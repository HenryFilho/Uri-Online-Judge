#include <stdio.h>

int main(){
    
    int x, i = 0;
    scanf("%i", &x);
    
    do{
        if(x % 2 != 0){
            printf("%i\n",x);
            i++;
        }
        x++;
    }while(i<6);
    
    return 0;
}