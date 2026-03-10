// Linguagem C: O Colapso da Estrutura de Dados
struct Veiculo { int id; float combustivel; float km_rodados; };
struct Motorista { int id; int cnh_valida; };

// Acoplamento altíssimo: a função exige a injeção de múltiplos ponteiros
// Se adicionarmos a 'struct Clima', a assinatura da função quebra inteira.
void registrar_viagem(struct Veiculo *v, struct Motorista *m, float km) {
    if (m->cnh_valida == 1) {
        v->km_rodados = v->km_rodados + km;
        v->combustivel = v->combustivel - (km / 10.0);
    }
}