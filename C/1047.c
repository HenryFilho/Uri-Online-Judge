#include <stdio.h>

int main(){
    
    int h0, m0, h1, m1, h2, m2;
    scanf("%i %i %i %i", &h0, &m0, &h1, &m1);
    
    if(h1<=h0 && m1<=m0){
        h1+=24;
    }
    
    h2 = h1 - h0;
    m2 = m1 - m0;
    
    if(m2 < 0){
        m2 += 60;
        h2 -= 1;
    }
    
    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", h2, m2);
    
    return 0;
}