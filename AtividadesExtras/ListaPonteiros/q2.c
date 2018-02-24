#include<stdio.h>

void troca();

int main(){
    
    int x, y;
    printf("Informe o valor de x: ");
    scanf("%d", &x);    
    printf("Informe o valor de y: ");
    scanf("%d", &y);
    
    troca(&x, &y);
    
    printf("x = %d - y = %d\n", x, y);
    return 0;
} 

void troca (int *p, int *q){
    
    int x = 0;
    x = *p;
    *p = *q;
    *q = x;
}
