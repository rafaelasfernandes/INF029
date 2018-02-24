#include<stdio.h>

void troca();

int main(){
    
    int x, y;
    printf("Informe o valor de x: ");
    scanf("%d", &x);    
    printf("Informe o valor de y: ");
    scanf("%d", &y);
    troca(&x, &y);
} 

void troca (int *p, int *q){
    
    int x;
    x = *p;
    *p = *q;
    *q = x;
    printf("x = %d - y = %d\n", *p, *q);
}
