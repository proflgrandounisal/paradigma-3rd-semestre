#include <stdio.h>

int main() {
    int velocidade = 0; // Estado inicial na memoria
    int limite_seguranca = 100;

    printf("Iniciando motor da maquina...\n");

    // Simulando o aumento gradativo da aceleracao
    for(int i = 0; i <= 140; i += 20) {
        velocidade = i; // Mutacao de estado
        
        if(velocidade > limite_seguranca) {
            printf("ALERTA: Velocidade %d excede limite! Intervencao no estado.\n", velocidade);
            velocidade = limite_seguranca; // Correcao forcada de estado
            printf("Estado corrigido para: %d\n", velocidade);
        } else {
            printf("Estado atual da velocidade: %d\n", velocidade);
        }
    }
    
    return 0;
}
