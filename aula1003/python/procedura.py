# Estágio 1: Procedural Clássico com Call-by-sharing
def processar_pagamento(conta, valor):
    # A função atua diretamente no endereço da memória externa (mutabilidade)
    conta['saldo'] = conta['saldo'] - valor

# Fluxo Principal
minha_conta = {'agencia': 123, 'saldo': 1000.0} 

processar_pagamento(minha_conta, 150.0)
# O estado original foi alterado.