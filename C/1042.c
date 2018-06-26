#include <stdio.h>

int main(){
    
    int a, b, c, x, y, z;
    scanf("%i %i %i", &a, &b, &c);
    
    if(a>b){ //AB
        if(b>c){ //ABC
            z = a;
            y = b;
            x = c;
        }else if(a>c){ //ACB
            z = a;
            y = c;
            x = b;
        }else{ //CAB
            z = c;
            y = a;
            x = b;
        }
    }else{ //BA
        if(a>c){ //BAC
            z = b;
            y = a;
            x = c;
        }else if(b>c){ //BCA
            z = b;
            y = c;
            x = a;
        }else{ //CBA
            z = c;
            y = b;
            x = a;
        }
    }
    
    printf("%i\n%i\n%i\n\n%i\n%i\n%i\n", x, y, z, a, b, c);
    
    return 0;
}