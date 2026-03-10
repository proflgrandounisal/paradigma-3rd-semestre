# Estágio 4: O Nascimento do Encapsulamento (Preview da próxima aula)
class Veiculo:
    # O Dado (antigo dicionário) nasce aqui dentro
    def __init__(self, combustivel_inicial):
        self.combustivel = combustivel_inicial
        self.km_rodados = 0.0

    # O Processo (antiga função solta) agora pertence ao Dado
    def registrar_viagem(self, km):
        self.km_rodados += km
        self.combustivel -= (km / 10.0)

# O objeto autogerencia sua própria memória. Não passamos mais dicionários.
carro = Veiculo(50.0)
carro.registrar_viagem(100.0)