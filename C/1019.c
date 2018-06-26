#include <stdio.h>

int main(){
    
    int horas, minutos, segundos, entrada;
    scanf("%i", &entrada);
    segundos = entrada % 60;
    minutos = (entrada / 60) % 60;
    horas = (entrada / 60) / 60;
    
    printf("%i:%i:%i\n", horas, minutos, segundos);
    
    return 0;
}

