# Estágio 2: Controle Cooperativo
def gerador_senhas():
    contador = 1 # Este estado local não será destruído
    
    while True:
        yield f"SENHA-{contador}" # Congela a execução
        contador += 1 # Acorda e continua daqui

catraca = gerador_senhas()
print(next(catraca)) # SENHA-1
print(next(catraca)) # SENHA-2