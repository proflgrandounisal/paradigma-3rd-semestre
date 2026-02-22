# Prática de Paradigmas de Programação: O Paradigma Imperativo

Bem-vindos ao repositório de práticas da disciplina de Paradigmas de Programação (3º semestre de Engenharia da Computação - Unisal).

Este repositório contém os códigos-fonte que utilizaremos em nossas aulas de quarta-feira para demonstrar, na prática, os conceitos de compilação, interpretação, gerenciamento de estado, variáveis e tipagem.

## Como utilizar este repositório (GitHub Codespaces)

Para focar totalmente nos conceitos e evitar problemas de configuração de compiladores locais, utilizaremos o GitHub Codespaces. Ele cria um ambiente de desenvolvimento em nuvem, baseado em Linux, acessível diretamente pelo seu navegador.

### Passo a passo para acesso:
1. No topo desta página, clique no botão verde escrito **Code**.
2. Selecione a aba **Codespaces**.
3. Clique em **Create codespace on main**.
4. Aguarde alguns segundos. O GitHub abrirá uma interface idêntica ao Visual Studio Code.
5. Acesse o terminal integrado pelo menu superior (`Terminal > New Terminal`) para executar os comandos de teste.
6. Acesse a pasta desta aula digitando `cd aula2502`.

---

## Roteiro de Exercícios

### Exercício 1: Tradução de Código (Compilado vs. Interpretado)
**Objetivo:** Sentir na prática a diferença de performance e o processo de tradução de um código interpretado (Python) e um compilado para linguagem de máquina (C).

* **Para testar a Interpretação (Python):**
    No terminal, digite o comando abaixo e anote o tempo de execução:
    `python script.py`

* **Para testar a Compilação (C):**
    Primeiro, traduza o código para um binário executável:
    `gcc programa.c -o programa`
    Em seguida, execute o binário gerado e compare o tempo:
    `./programa`

### Exercício 2: Mutação de Estado e Controle Imperativo
**Objetivo:** Observar a variável de estado mudando de valor na memória durante a execução e aplicar o controle imperativo para segurança do sistema.

* **Arquivo alvo:** `motor.c`
* **Ação:** Compile o arquivo usando o GCC (`gcc motor.c -o motor`) e execute (`./motor`). Analise a saída no terminal para entender como o estado da variável de velocidade é interceptado e corrigido pelo código.

### Exercício 3: Violação de Tipagem (Quebrando a Caixa)
**Objetivo:** Forçar um erro de tipo de dado e observar a diferença de comportamento entre uma linguagem de tipagem estática e uma de tipagem dinâmica.

* **Arquivos alvo:** `tipos.c` e `tipos.py`
* **Ação em C:** Abra o arquivo `tipos.c`, leia os comentários e remova a barra de comentário da linha indicada. Tente compilar com o GCC e observe que o executável sequer é gerado.
* **Ação em Python:** Abra o arquivo `tipos.py`, remova o comentário da linha indicada e execute com o comando `python tipos.py`. Observe que o programa roda inicialmente, mas sofre uma falha fatal (Runtime Error) durante a execução.

## Perguntas para Reflexão e Discussão em Sala

Após concluir as execuções no terminal do Codespaces, reflita sobre as questões abaixo. Elas serão o ponto de partida para o nosso debate de fechamento da aula.

### Sobre o Exercício 1 (Desempenho e Tradução):
1. Qual foi a proporção da diferença de tempo que você obteve entre a execução em C e em Python?
2. Considerando a arquitetura do computador e o papel do compilador, qual é o motivo técnico para a linguagem C ser tão mais rápida na execução deste laço de repetição?
3. Se o Python é mais lento em tempo de execução, por que ele é tão utilizado atualmente? Em qual cenário de projeto na Engenharia você abriria mão da velocidade do C pela flexibilidade do Python?

### Sobre o Exercício 2 (Controle de Estado):
1. O que aconteceria com a lógica do sistema se a estrutura de controle (if/else) fosse removida e o estado da variável de velocidade ultrapassasse o limite de 100?
2. Como esse conceito abstrato de "estado de variável" se traduz para o mundo físico se estivéssemos programando o microcontrolador de um freio ABS ou de um braço robótico industrial?

### Sobre o Exercício 3 (Sistemas de Tipagem):
1. Qual linguagem (C ou Python) detectou o erro de formato de dado mais cedo no processo de desenvolvimento?
2. Imagine que você foi contratado para escrever o software de controle de um marca-passo cardíaco. Qual sistema de tipagem (estático do C ou dinâmico do Python) você escolheria e por quê?
3. Qual é o perigo de projeto (risco de falha) quando uma linguagem permite a mudança do tipo da variável com o sistema já em execução?

---
*Prof. Dr. Leonardo Grando*
