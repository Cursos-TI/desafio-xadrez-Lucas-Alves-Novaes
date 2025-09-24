#include <stdio.h>

int main() {
    int movimento;
    int bispo = 1;
    int rainha = 1;

    printf("\n*** Jogo de Xadrez ***\n");
    printf("\nTorre\n");
    
        for (int torre = 1; torre <= 5; torre++) {  // Loop para mover a torre 5 vezes
            printf("Cima\n");
        }

    printf("\nBispo\n");  
    
        do  // Loop para mover o bispo 5 vezes      
        {
            printf("Cima Direita\n");
            bispo++;
        } while (bispo <= 5);  

    printf("\nRainha\n");  

        while (rainha <= 8)  // Loop para mover a rainha 8 vezes
        {
           printf("Esquerda\n");
           rainha++;
        }
        
        
    return 0;
}