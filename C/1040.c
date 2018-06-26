#include <stdio.h>

int main(){
    
    double n1, n2, n3, n4, media, exame, nv_media;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    if(media >= 7.0){
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    }else if(media < 5.0){
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }else{
        scanf("%lf", &exame);
        
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n", exame);
        
        nv_media = (media + exame) / 2;
        if(nv_media >= 5.0){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", nv_media);
    }
    
    return 0;
}