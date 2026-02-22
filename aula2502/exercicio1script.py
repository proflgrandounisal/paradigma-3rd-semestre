import time

inicio = time.time()
soma = 0

# Mesmo loop pesado para comparacao justa
for i in range(100000000):
    soma += i

fim = time.time()
tempo_gasto = fim - inicio

print(f"Soma: {soma}")
print(f"Tempo de execucao (Interpretado - Python): {tempo_gasto:.6f} segundos")
