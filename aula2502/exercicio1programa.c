#include <stdio.h>
#include <time.h>

int main() {
    clock_t inicio = clock();
    long long soma = 0;
    
    // Loop pesado para forçar o processamento
    for(long long i = 0; i < 100000000; i++) {
        soma += i;
    }
    
    clock_t fim = clock();
    double tempo_gasto = (double)(fim - inicio) / CLOCKS_PER_SEC;
    
    printf("Soma: %lld\n", soma);
    printf("Tempo de execucao (Compilado - C): %f segundos\n", tempo_gasto);
    
    return 0;
}
