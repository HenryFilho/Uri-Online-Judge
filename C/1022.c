#include <stdio.h>

int mdc(int a, int b)
{
	if(a<0)
		a = -a;
	if(b<0)
		b = -b;
	if(a%b == 0)
		return b;
	else
		return mdc(b,a%b);
}

int main(){
    
    int q, n1, d1, n2, d2, n3, d3, n4, d4;
    char c1, c2, c3;
    scanf("%i", &q);
    
    int resultados[q][4];
    int i = 0;
    do{
        scanf("%i %c %i %c %i %c %i", &n1, &c1, &d1, &c2, &n2, &c3, &d2);
        if(c2 == '+'){
            n3 = n1 * d2 + n2 * d1;
            d3 = d1 * d2;
        }else if(c2 == '-'){
            n3 = n1 * d2 - n2 * d1;
            d3 = d1 * d2;
        }else if(c2 == '*'){
            n3 = n1 * n2;
            d3 = d1 * d2;
        }else if(c2 == '/'){
            n3 = n1 * d2;
            d3 = n2 * d1;
        }
        
        n4 = n3 / mdc(n3,d3);
        d4 = d3 / mdc(n3,d3);
        
        resultados[i][0] = n3;
        resultados[i][1] = d3;
        resultados[i][2] = n4;
        resultados[i][3] = d4;
        
        i++;
    }while(i<q);
    
    int j = 0;
    do{
        printf("%i/%i = %i/%i\n", resultados[j][0], resultados[j][1], resultados[j][2], resultados[j][3]);
        j++;
    }while(j<q);
    
    return 0;
}