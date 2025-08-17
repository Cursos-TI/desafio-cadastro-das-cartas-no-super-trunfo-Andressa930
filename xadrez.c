#include <stdio.h>

// --TORRE --
void torreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    torreCima(casas - 1);
}

void torreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    torreDireita(casas - 1);
}

// --BISPO --
void bispoRec(int casas, const char* v, const char* h) {
    if (casas == 0) return;
    printf("%s\n", v);
    printf("%s\n", h);
    bispoRec(casas - 1, v, h);
}

// --RAINHA --
void rainha(int vCasas, const char* v, int hCasas, const char* h) {
    if (vCasas == 0 && hCasas == 0) return;

    if (vCasas > 0 && hCasas > 0) { // diagonal
        printf("%s\n", v);
        printf("%s\n", h);
        rainha(vCasas - 1, v, hCasas - 1, h);
    } else if (vCasas > 0) { // só vertical
        printf("%s\n", v);
        rainha(vCasas - 1, v, hCasas, h);
    } else { // só horizontal
        printf("%s\n", h);
        rainha(vCasas, v, hCasas - 1, h);
    }
}

int main() {
    // ==TORRE
    printf("=== TORRE ===\n");
    torreCima(3); // 3 casas para cima
    torreDireita(2); // 2 casas para direita
    printf("\n");

    // ==BISPO(Recursivo)
    printf("=== BISPO (recursivo) ===\n");
    bispoRec(3, "Cima", "Direita"); // 3 casas em diagonal (Cima+Direita)
    printf("\n");

    // == BISPO (loops aninhados) 
    printf("=== BISPO (loops) ===\n");
    int casasBispo = 2;
    for (int i = 0; i < casasBispo; i++) {
        printf("Baixo\n");
        for (int j = 0; j < 1; j++) {
            printf("Esquerda\n");
            break; // só um passo horizontal
        }
    }
    printf("\n");

    //==RAINHA 
    printf("=== RAINHA ===\n");
    rainha(2, "Cima", 2, "Direita"); // 2 diagonais (Cima+Direita)
    printf("\n");

    // == CAVALO 
    printf("=== CAVALO ===\n");
    int movimentosL = 3;
    for (int l = 0; l < movimentosL; l++) {
        int cima = 0, direita = 0;
        for (int passo = 0; passo < 3; passo++) {
            if (cima < 2) {
                printf("Cima\n");
                cima++;
                continue;
            }
            if (direita == 0) {
                printf("Direita\n");
                direita = 1;
                break; // terminou este L
            }
        }
    }
    printf("\n");

    return 0;
}
