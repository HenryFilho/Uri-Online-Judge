#include <stdio.h>
#include <math.h>

int main(){
    
    double i = 0, j = 1, k = 1, l = 5;
    do{
        if(l == 5)
            printf("I=%.0lf J=%.0lf\n",i,j);
        else
            printf("I=%.1lf J=%.1lf\n",i,j);
        
        j++;
        k++;
        
        if(k == 4){
            i += 0.2;
            j -= 2.8;
            k = 1;
            if(l>=5)
                l = 0;
            l++;
        }
    }while(i<=2);
    
    return 0;
}