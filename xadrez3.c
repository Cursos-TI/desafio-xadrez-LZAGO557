#include <stdio.h>

void recursivo (int passost) {
    if (passost > 0) {
        recursivo(passost - 1);
        printf("Direita %d\n", passost);
    }
}

void recursivo_bispo(int passosb) {
    if (passosb > 0) {
        printf("Cima\n");
        recursivo_bispo(passosb - 1);
        printf("Baixo\n");
    }
}

void recursivo_rainha(int passosr) {
    if (passosr > 0) {
        printf("Esquerda %d\n", passosr);
        recursivo_rainha(passosr - 1);
    }
}


int main() { 
    printf("###Torre###\n");
    int i = 5;
        recursivo(i);

        
    printf("\n###Bispo###\n");
    int j = 5;
        recursivo(j);
    
    
    printf("\n###Rainha###\n");
    int k = 8;
        recursivo(k);

    
    printf("\n###Cavalo###\n");
    int x = 1, y = 1;

    for (int x = 1; x <= 1; x++) {
            for (int y = 1; y <=2; y++) {
        printf("Cima %d\n", y);
        continue;
            }
        printf("Direita\n");  
        }

    
    return 0;
}
