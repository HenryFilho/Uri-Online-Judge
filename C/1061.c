#include <stdio.h>

int main(){
    
    char a[4], b[3];
    int dia0, hora0, minuto0, segundo0, dia, hora, minuto, segundo, dia_, hora_, minuto_, segundo_;
    scanf("%s%d", a, &dia0);
    scanf("%d%s%d%s%d", &hora0, b, &minuto0, b, &segundo0);
    scanf("%s%d", a, &dia);
    scanf("%d%s%d%s%d", &hora, b, &minuto, b, &segundo);
    
    dia_ = dia - dia0;
    hora_ = hora - hora0;
    minuto_ = minuto - minuto0;
    segundo_ = segundo - segundo0;
    
    if(segundo_<0){
        segundo_ += 60;
        minuto_ -= 1;
    }
    if(minuto_<0){
        minuto_ += 60;
        hora_ -= 1;
    }
    if(hora_<0){
        hora_ += 24;
        dia_ -= 1;
    }
    
    printf("%i dia(s)\n%i hora(s)\n%i minuto(s)\n%i segundo(s)\n", dia_, hora_, minuto_, segundo_);
    
    return 0;
}