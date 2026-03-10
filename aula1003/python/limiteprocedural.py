# Estágio 3: O Colapso da Estrutura de Dados
veiculo = {'id': 1, 'combustivel': 50.0, 'km_rodados': 0.0}
motorista = {'id': 101, 'cnh_valida': True}

# Acoplamento altíssimo: a função exige a injeção de múltiplos dicionários
def registrar_viagem(v, m, km):
    if m['cnh_valida'] == True:
        v['km_rodados'] += km
        v['combustivel'] -= (km / 10.0)

registrar_viagem(veiculo, motorista, 100.0)