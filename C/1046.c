#include <stdio.h>

int main(){
    
    int a, b, c;
    scanf("%i %i", &a, &b);
    
    if(b<=a){b+=24;}
    
    c = b - a;
    printf("O JOGO DUROU %i HORA(S)\n", c);
    
    return 0;
}