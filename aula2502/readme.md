# Pratica de Paradigmas de Programacao: O Paradigma Imperativo

Bem-vindos ao repositorio de praticas da disciplina de Paradigmas de Programacao (3o semestre de Engenharia da Computacao - Unisal).

Este repositorio contem os codigos-fonte que utilizaremos em nossas aulas de quarta-feira para demonstrar, na pratica, os conceitos de compilacao, interpretacao, gerenciamento de estado, variaveis e tipagem.

## Como utilizar este repositorio (GitHub Codespaces)

Para focar totalmente nos conceitos e evitar problemas de configuracao de compiladores locais, utilizaremos o GitHub Codespaces. Ele cria um ambiente de desenvolvimento em nuvem, baseado em Linux, acessivel diretamente pelo seu navegador.

### Passo a passo para acesso:
1. No topo desta pagina, clique no botao verde escrito **Code**.
2. Selecione a aba **Codespaces**.
3. Clique em **Create codespace on main**.
4. Aguarde alguns segundos. O GitHub abrira uma interface identica ao Visual Studio Code.
5. Acesse o terminal integrado pelo menu superior (`Terminal > New Terminal`) para executar os comandos de teste.

---

## Roteiro de Exercicios

### Exercicio 1: Traducao de Codigo (Compilado vs Interpretado)
**Objetivo:** Sentir na pratica a diferenca de performance e o processo de traducao de um codigo interpretado (Python) e um compilado para linguagem de maquina (C).

* **Para testar a Interpretacao (Python):**
    No terminal, digite o comando abaixo e anote o tempo de execucao:
    `python script.py`

* **Para testar a Compilacao (C):**
    Primeiro, traduza o codigo para um binario executavel:
    `gcc programa.c -o programa`
    Em seguida, execute o binario gerado e compare o tempo:
    `./programa`

### Exercicio 2: Mutacao de Estado e Controle Imperativo
**Objetivo:** Observar a variavel de estado mudando de valor na memoria durante a execucao e aplicar o controle imperativo para seguranca do sistema.

* **Arquivo alvo:** `motor.c`
* **Acao:** Compile o arquivo usando o GCC (`gcc motor.c -o motor`) e execute (`./motor`). Analise a saida no terminal para entender como o estado da variavel de velocidade e interceptado e corrigido pelo codigo.

### Exercicio 3: Violacao de Tipagem (Quebrando a Caixa)
**Objetivo:** Forcar um erro de tipo de dado e observar a diferenca de comportamento entre uma linguagem de tipagem estatica e uma de tipagem dinamica.

* **Arquivos alvo:** `tipos.c` e `tipos.py`
* **Acao em C:** Abra o arquivo `tipos.c`, leia os comentarios e remova a barra de comentario da linha indicada. Tente compilar com o GCC e observe que o executavel sequer e gerado.
* **Acao em Python:** Abra o arquivo `tipos.py`, remova o comentario da linha indicada e execute com o comando `python tipos.py`. Observe que o programa roda inicialmente, mas sofre uma falha fatal (Runtime Error) durante a execucao.

---
*Prof. Dr. Leonardo Grando*
