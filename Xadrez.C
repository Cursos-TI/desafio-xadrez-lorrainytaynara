#include <stdio.h>

/**
 * @brief Simula o movimento de três peças de xadrez: Torre, Bispo e Rainha.
 * * Cada peça usa uma estrutura de repetição diferente (for, while, do-while)
 * para simular seu movimento em um número predefinido de casas.
 */
int main() {
    // --- Variáveis/Constantes de Movimento ---
    
    // Movimento da Torre: 5 casas para a direita
    const int casas_torre = 5;
    
    // Movimento do Bispo: 5 casas na diagonal (Cima, Direita)
    const int casas_bispo = 5;
    
    // Movimento da Rainha: 8 casas para a esquerda
    const int casas_rainha = 8;
    
    // --- 1. Movimento da TORRE (Usando FOR) ---
    // Move-se em linha reta (Horizontal ou Vertical).
    // Simulação: 5 casas para a DIREITA.
    printf("--- Movimento da TORRE ---\n");
    printf("Direcao: Direita por %d casas\n", casas_torre);
    
    // Inicializa o contador para a estrutura for
    int i; 
    
    // Loop 'for' para simular o movimento casa por casa
    for (i = 1; i <= casas_torre; i++) {
        // Imprime a direção do movimento a cada casa percorrida
        printf("Casa %d: Direita\n", i);
    }
    
    printf("\n"); // Linha em branco para separação
    
    // --- 2. Movimento do BISPO (Usando WHILE) ---
    // Move-se na diagonal.
    // Simulação: 5 casas na diagonal para CIMA e a DIREITA.
    printf("--- Movimento do BISPO ---\n");
    printf("Direcao: Cima e Direita por %d casas\n", casas_bispo);
    
    // Inicializa o contador para a estrutura while
    int contador_bispo = 0;
    
    // Loop 'while' para simular o movimento casa por casa
    while (contador_bispo < casas_bispo) {
        contador_bispo++; // Incrementa antes de imprimir, ou inicia em 1 e checa <= casas_bispo
        
        // Imprime a combinação de duas direções para representar a diagonal
        printf("Casa %d: Cima, Direita\n", contador_bispo);
    }
    
    printf("\n"); // Linha em branco para separação
    
    // --- 3. Movimento da RAINHA (Usando DO-WHILE) ---
    // Move-se em todas as direções (reta e diagonal).
    // Simulação: 8 casas para a ESQUERDA.
    printf("--- Movimento da RAINHA ---\n");
    printf("Direcao: Esquerda por %d casas\n", casas_rainha);
    
    // Inicializa o contador para a estrutura do-while
    int contador_rainha = 1;
    
    // Verifica se o movimento é possível (pelo menos 1 casa)
    if (casas_rainha > 0) {
        // Loop 'do-while' para simular o movimento casa por casa
        do {
            // Imprime a direção do movimento
            printf("Casa %d: Esquerda\n", contador_rainha);
            
            contador_rainha++; // Incrementa o contador
        } while (contador_rainha <= casas_rainha); 
    } else {
        printf("Nenhum movimento para a Rainha.\n");
    }
    
    return 0;
}
