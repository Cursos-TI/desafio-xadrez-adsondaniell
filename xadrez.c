#include <stdio.h>

// Função recursiva para mover a Torre 
// Torre 5 casas pra frente
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Pra Frente\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo com loops aninhados
// Bispo 5 casas pra cima e direita
void moverBispo(int casas, int movimento) {
    if (casas == 0) return;
    for (int i = 0; i < movimento; i++) {
        printf("Pra Cima, Pra Direita\n");
    }
    moverBispo(casas - 1, movimento);
}

// Função recursiva para mover a Rainha
// Rainha 8 casa pra esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Pra Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do Cavalo usando loops aninhados
// Cavalo movimento formato "L"
void moverCavalo() {
    int movimentos = 2; // Duas casas para cima
    for (int i = 0; i < movimentos; i++) {
        printf("Cima\n");
    }
    printf("Direita\n"); // Uma casa para a direita
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);
    
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 1);
    
    printf("\nMovimento da Rainha:\n");;
    moverRainha(8);
    
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();
    
    return 0;
}
