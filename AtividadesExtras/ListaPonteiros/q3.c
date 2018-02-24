#include<stdio.h>
#define t 5

void ordena();

int main(){
    
    int i, vet[t];
    
    for (i = 0; i < t; i++){
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
    ordena(vet);
    
    printf("\nValores ordenados:");
    for (i = 0; i < t; i++){
        printf("posicao %d: %d\n", i, vet[i]);
    }

    return 0;
}

void ordena (int vetor[]){
    
    int i, j, aux = 0;
    
    for (i = 0; i < t; i++){
        for (j = i + 1; j < t; j++){
            if (vetor[i] > vetor[j]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
            
        }
    }
}
