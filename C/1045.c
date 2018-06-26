#include <stdio.h>
#include <math.h>

int main(){
    
    double a, b, c, x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);
    
    if(x>y){
        if(x>z){ //X
            a = x;
            b = y;
            c = z;
        }else{ //Z
            a = z;
            b = x;
            c = y;
        }
    }else{
        if(y>z){ //Y
            a = y;
            b = x;
            c = z;
        }else{ //Z
            a = z;
            b = x;
            c = y;
        }
    }
    
    if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if(pow(a,2) == pow(b,2) + pow(c,2)){
            printf("TRIANGULO RETANGULO\n");
        }else if(pow(a,2) > pow(b,2) + pow(c,2)){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if(pow(a,2) < pow(b,2) + pow(c,2)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        
        if(a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        }else if(a == b || b == c){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}