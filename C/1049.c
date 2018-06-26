#include <stdio.h>
#include <string.h>

int main()
{
    char x[20];
    scanf("%s", &x);

    if(strcmp(x,"vertebrado")==0){
        scanf("%s", &x);
        if(strcmp(x,"ave")==0){
            scanf("%s", &x);
            if(strcmp(x,"carnivoro")==0){
                printf("aguia\n");
            }
            else if(strcmp(x,"onivoro")==0){
                printf("pomba\n");
            }
        }
        else if(strcmp(x,"mamifero")==0){
            scanf("%s", &x);
            if(strcmp(x,"onivoro")==0){
                printf("homem\n");
            }
            else if(strcmp(x,"herbivoro")==0){
                printf("vaca\n");
            }
        }
    }
    else if(strcmp(x,"invertebrado")==0){
        scanf("%s", &x);
        if(strcmp(x,"inseto")==0){
            scanf("%s", &x);
            if(strcmp(x,"hematofago")==0){
                printf("pulga\n");
            }
            else if(strcmp(x,"herbivoro")==0){
                printf("lagarta\n");
            }
        }
        else if(strcmp(x,"anelideo")==0){
            scanf("%s", &x);
            if(strcmp(x,"hematofago")==0){
                printf("sanguessuga\n");
            }
            else if(strcmp(x,"onivoro")==0){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}