# Evolução Arquitetural: Do Procedural Clássico à Orientação a Objetos

Este repositório contém a demonstração prática da evolução do controle de estado e fluxo de execução no Paradigma Imperativo, culminando na transição para o Paradigma Orientado a Objetos.

Os quatro códigos Python ilustram as etapas de desenvolvimento de software, desde a manipulação direta de memória até o encapsulamento de dados complexos.

---

## Estágio 1: O Procedural Clássico (`procedura.py`)

No primeiro estágio, abolimos as variáveis globais. O estado do sistema nasce no fluxo principal e é transmitido para os subprogramas através da passagem de parâmetros. 

**O que observar neste código:**
Como o Python utiliza o modelo de Passagem por Objeto (*Call-by-sharing*), ao passarmos um Dicionário (um tipo de dado mutável) para a função `processar_pagamento`, estamos entregando a referência de memória original. 
A função causa uma mutação direta no estado externo (Efeito Colateral) de forma controlada. O problema lógico é resolvido de forma estruturada, mas o dado e a função ainda vivem em mundos separados.



---

## Estágio 2: A Evolução do Fluxo com Corrotinas (`corrotinas.py`)

Neste estágio, rompemos a limitação do controle de fluxo tradicional, onde uma função precisa ser executada do início ao fim (run-to-completion) para devolver um resultado.

**O que observar neste código:**
A palavra-chave `yield` transforma a função em uma Corrotina. Quando a execução atinge o `yield`, a função é "congelada". Ela devolve um valor ao chamador, mas não destrói o seu escopo local (Stack). Na próxima chamada, ela acorda exatamente de onde parou.
Esta é a base arquitetural para a *Avaliação Preguiçosa* (Lazy Evaluation), permitindo processar volumes massivos de dados sem esgotar a memória RAM do computador.



---

## Estágio 3: A Crise do Estado (`limiteprocedural.py`)

Este é o limite físico e lógico do Paradigma Procedural. Em sistemas de grande porte, as estruturas de dados tornam-se complexas.

**O que observar neste código:**
Temos dois dicionários simulando estruturas de dados (`veiculo` e `motorista`). A função `registrar_viagem` está fisicamente separada deles. Para funcionar, a função exige a injeção destas estruturas via parâmetros.
Se adicionarmos novos elementos (como clima, passageiros, rotas), a assinatura da função cresce descontroladamente. Qualquer alteração na chave do dicionário quebra o código silenciosamente. O acoplamento torna a manutenção insustentável. A separação entre Dado e Processo falhou.

---

## Estágio 4: A Transição para a Orientação a Objetos (`orientadoobjetos.py`)

O último estágio apresenta a solução arquitetural de Engenharia de Software para a Crise do Estado demonstrada no arquivo anterior.

**O que observar neste código:**
O Dicionário (Dado) e a Função (Processo) foram fundidos em uma única entidade chamada **Classe**. 
O estado interno do veículo agora é protegido. A função `registrar_viagem` não precisa mais receber dicionários externos soltos; ela acessa a sua própria memória interna através da palavra `self`.
Este isolamento elimina o acoplamento frágil e oculta a complexidade do mundo externo, inaugurando o conceito de **Encapsulamento** que estudaremos a fundo no Paradigma Orientado a Objetos.



---
**Instruções de Estudo:** Execute os arquivos sequencialmente e observe a evolução das assinaturas das funções. O código final em POO realiza exatamente a mesma tarefa do Estágio 3, mas com uma arquitetura resistente a falhas de acoplamento.