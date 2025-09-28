#include <stdio.h>

void moverTorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas){
    if(casas > 0){
        printf("Cima Direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    int movimento;
  

    printf("\n*** Jogo de Xadrez ***\n");
    printf("\nTorre\n");
    moverTorre(5);  // Chama a função recursiva para mover a torre 5 vezes
        

    printf("\nBispo\n");  
    moverBispo(5);  // Chama a função recursiva para mover o bispo 5 vezes    
    
    printf("\nRainha\n");  
    moverRainha(8);  // Chama a função recursiva para mover a rainha 5 vezes
    
    printf("\nCavalo\n");  

        for (int i = 1; i <= 1; i++) {  // Loop para mover o cavalo 1 vez para direita
            for (int k = 0; k <= 1; k++) { // Loope para mover o cavalo 2 vezes para cima
                printf("Cima\n");
                
            }
            printf("Direita\n");
        }
        
    return 0;
}