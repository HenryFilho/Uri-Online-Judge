#include <stdio.h>

int main(){
    
    int i = -1, j = 3, k = 4;
    do{
        j--;
        if(k==4){
            i += 2;
            j += 5;
            k = 1;
        }
        k++;
        printf("I=%i J=%i\n",i,j);
    }while(i < 9 || k < 4);
    
    return 0;
}