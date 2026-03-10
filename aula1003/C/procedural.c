// Linguagem C: Abstração de Processo com Estado Protegido
void processar_pagamento(float *saldo, float valor) {
    // A função atua diretamente no endereço da memória externa
    *saldo = *saldo - valor;
}

int main() {
    float saldo_conta = 1000.0; // Estado trancado no escopo local
    
    // O programador precisa gerenciar o envio do endereço (&)
    processar_pagamento(&saldo_conta, 150.0);
    
    return 0;
}