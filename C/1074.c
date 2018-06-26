#include <stdio.h>
#include <math.h>

int main(){
    
    int n,x;
    scanf("%i",&n);
    
    char* valores[n];
    int i = 0;
    do{
        scanf("%i",&x);
        if(x==0)
            valores[i] = "NULL";
        else if(x>0 && x % 2 == 0)
            valores[i] = "EVEN POSITIVE";
        else if(x>0)
            valores[i] = "ODD POSITIVE";
        else if(x % 2 == 0)
            valores[i] = "EVEN NEGATIVE";
        else
            valores[i] = "ODD NEGATIVE";
        i++;
    }while(i<n);
    
    i = 0;
    do{
        printf("%s\n",valores[i]);
        i++;
    }while(i<n);
    
    return 0;
}